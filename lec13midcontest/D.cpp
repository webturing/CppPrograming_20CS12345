#include<bits/stdc++.h>

using namespace std;
using LL=long long;

bool ok(LL f) {
    int b[10] = {0};
    while (f > 0) {
        b[f % 10]++;
        f /= 10;
    }
    for (int i = 1; i <= 9; i++) {
        if (b[i] != 1)return false;
    }
    return true;
}

int main() {
    for (LL x = 123; 3 * x <= 987; x++) {
        LL y = 2 * x;
        LL z = 3 * x;
        LL f = 1000000 * x + 1000 * y + z;
        if (ok(f))
            cout << x << " " << y << " " << z << endl;
    }
    return 0;
}