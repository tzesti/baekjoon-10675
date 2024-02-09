#include <iostream>
using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;

    // cout << "Routes: " << n << endl;
    // cout << " Target: " << a << " -> " << b << endl;

    int cost;
    int cityNum;
    int city;

    int minCost = 1001;
    bool hasA;
    bool hasB;

    for (int i=0 ; i<n ; i++) {
        cin >> cost >> cityNum;

        // cout << "Route " << i + 1 << ": cost=" << cost << endl;
        hasA = false;
        hasB = false;
        for (int j=0 ; j<cityNum ; j++) {
            cin >> city;

            if (!hasA && city == a) {
                hasA = true;
            } else if (hasA && !hasB && city == b) {
                hasB = true;

                if (cost < minCost) {
                    minCost = cost;
                }
            }

            // cout << " " << city;
        }
        // cout << endl;
    }


    if (minCost > 1000) {
        cout << -1;
    } else {
        cout << minCost;
    }

    return EXIT_SUCCESS;
}
