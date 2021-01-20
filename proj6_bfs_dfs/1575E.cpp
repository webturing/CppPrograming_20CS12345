
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 1e6 + 10;
bool prime[maxn];
void fill() {
    fill(prime, prime + maxn, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= maxn; i++)
        if (prime[i])
            for (int j = i * 2; j < maxn; j += i) prime[j] = false;
}
int main() {
    fill();
    int a, b;
    cin >> a >> b;
    int tot = 0;
    for (int i = a; i <= b; i++) {
        if (prime[i]) ++tot;
    }
    cout << tot;
    return 0;
}
