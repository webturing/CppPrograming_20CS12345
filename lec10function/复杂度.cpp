#include<bits/stdc++.h>

using namespace std;

int main() {
    int n = 10000;
    for (int x = 0; x <= n / 5; x++)
        for (int y = 0; y <= n / 3; y++) {
            int z = n - x - y;
            if (x + y + z == n && 5 * x + 3 * y + z / 3 == n) {
                cout << x << " " << y << " " << z << endl;
            }
        }
    return 0;
}
