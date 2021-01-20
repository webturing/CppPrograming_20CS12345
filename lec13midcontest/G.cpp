#include<bits/stdc++.h>

using namespace std;
using LL=long long;

int main() {
    LL a[10] = {1, 1};
    for (int i = 2; i <= 9; i++)a[i] = a[i - 1] * i;
    int m;
    cin >> m;
    LL sum = 0;
    for (int i = 1; i <= m; i++)sum += a[i];
    cout << sum;

    return 0;
}