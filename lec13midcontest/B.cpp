#include<bits/stdc++.h>

using namespace std;
typedef long long LL;

LL gcd(LL a, LL b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    LL a, b, c;
    cin >> a >> b;
    c = gcd(a, b);
    cout << c * c;
    return 0;
}