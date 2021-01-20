#include<bits/stdc++.h>

using namespace std;
using LL=long long;

bool ok(LL tel) {
    int b[10] = {0};
    while (tel > 0) {
        b[tel % 10]++;
        tel /= 10;
    }
    return b[4] == 0 && (b[6] + b[8] >= 5);
}

int main() {

    LL best = 0, tel;
    while (cin >> tel) {
        if (ok(tel)) {
            cout << tel << endl;
            ++best;
        }
    }
    cout << best << endl;
    return 0;
}