#include<bits/stdc++.h>

using namespace std;
using LL=long long;

int main() {
    LL x0, y0, r;
    while (cin >> x0 >> y0 >> r) {
        LL tot = 0;
        for (LL x = -r; x <= r; x++)
            for (LL y = -r; y <= r; y++) {
                if (x * x + y * y == r * r)
                    ++tot;
            }
        cout << tot << endl;
    }

    return 0;
}