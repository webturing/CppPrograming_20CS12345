#include<bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a < 100)a = 100;
    if (b > 999)b = 999;
    for (int n = a; n <= b; n++) {
        int x = n / 100;
        int y = n / 10 % 10;
        int z = n % 10;
        if (x * x * x + y * y * y + z * z * z == n) {
            cout << n << endl;
        }
    }
    return 0;
}
