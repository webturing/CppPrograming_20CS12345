#include<bits/stdc++.h>

using namespace std;
using LL=long long;

int main() {
    LL f[51] = {0, 1, 1, 1};
    for (int i = 4; i <= 50; i++) {
        f[i] = f[i - 1] + f[i - 3];
    }
    int n;
    cin >> n;
    cout << f[n];


    return 0;
}