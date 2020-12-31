#include<bits/stdc++.h>

using namespace std;
const int maxn = 100 + 10;
int a[maxn], n;

int main() {
    n = 0;
    for (int i = 0; cin >> a[i]; i++)n++;

    bool ok = true;
    for (int i = 0; i <= n - 2; i++)
        if (a[i] > a[i + 1]) {
            ok = false;
            break;
        }

    cout << (ok ? "YES" : "NO");

    return 0;
}