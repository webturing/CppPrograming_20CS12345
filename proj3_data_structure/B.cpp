#include<bits/stdc++.h>

using namespace std;
const int maxn = 1000 + 10;
int book[maxn], n, m = 0, t;

int main() {
    memset(book, 0, sizeof(book));
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        if (book[t] == 1)continue;
        book[t] = 1;
        m++;
    }
    cout << m << endl;
    for (int i = 0; i < maxn; i++) {
        if (book[i])cout << i << " ";
    }
    return 0;
}