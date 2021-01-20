#include<bits/stdc++.h>

using namespace std;
const int maxn = 5000 + 1;
long long a[maxn], s[maxn], book[maxn];
int n;

//a[n-1] a[0] a[n-2] a[1]....
int main() {
    cin >> n;
    for (int i = 0; i < n; i++)cin >> a[i];
    fill(book, book + n, 0);
    sort(a, a + n);
    long long p = n-1, s = 0;
    for (int i = 0; i < n; i++) {
        s += a[p] * a[p];
        book[p] = 1;
        p = n - 1 - p;
        if (book[p]) {
            if (p < n / 2)p++;
            else p--;
        }

    }
    cout << s << endl;

    return 0;
}