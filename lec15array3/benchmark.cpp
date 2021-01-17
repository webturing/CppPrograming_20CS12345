#include<bits/stdc++.h>

using namespace std;
using ll = long long;
const int n = 10000;

int main() {
    ll start = clock();
    for (int x = 0; x <= n; x++)
        for (int y = 0; y <= n; y++) {
            int z = n - x - y;
            // for(int z = 0; z <= n; z++) {
            if (x + y + z == n && 5 * x + 3 * y + z / 2 == n) {

                cout << x << " " << y << " " << z << endl;
            }
        }
    ll end = clock();
    cout << (end - start) / 1000.0 << " Second(s)." << endl;
    return 0;
}
