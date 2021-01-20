
#include <bits/stdc++.h>
using namespace std;
int a[9], n;
bool book[9];
void dfs(int k) {
    if (k >= n) {
        bool ok = true;
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                if ((j - i) == abs(a[i] - a[j])) ok = false;

        if (ok) {
            for (int i = 0; i < n; i++) cout << a[i];
            cout << endl;
        }
        return;
    }
    for (int i = 0; i < n; i++) {
        if (book[i]) continue;
        book[i] = true;
        a[k] = i;
        dfs(k + 1);
        book[i] = false;
    }
}
int main() {
    n = 8;
    dfs(0);
    return 0;
}
