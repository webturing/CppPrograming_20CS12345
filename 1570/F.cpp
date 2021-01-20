#include<bits/stdc++.h>

using namespace std;
const int maxn = 5000 + 1;
long long a[maxn], s[maxn];
int n;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)cin >> a[i];
    s[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--)s[i] = s[i + 1] + a[i];
    for (int i = 0; i < n; i++) {
        cout << s[i] << " ";
    }
    cout << endl;

    return 0;
}