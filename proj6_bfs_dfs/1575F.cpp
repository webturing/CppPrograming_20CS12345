
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// f(n)是以0开头不含11的串的个数
// g(n)是以1打头不含11的串的个数
// f(1)=g(1)=1
// f(n+1)=f(n)+g(n)
// g(n+1)=f(n)
const int maxn = 1000 + 10;
const ll MOD = 1e9 + 7;
ll f[maxn], g[maxn];
int n;
int main() {
    cin >> n;
    f[1] = g[1] = 1;
    for (int i = 2; i <= n; i++) {
        f[i] = (f[i - 1] + g[i - 1]) % MOD;
        g[i] = f[i - 1];
    }
    cout << (f[n] + g[n]) % MOD;

    return 0;
}
