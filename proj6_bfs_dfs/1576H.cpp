
#include <bits/stdc++.h>
using namespace std;
int a[9], n;
bool book[9];
void dfs(int k) {
    if (k >= n) {
        for (int i = 0; i < n; i++) cout << a[i];
        cout << endl;
        return;
    }
    for (int i = 0; i < n; i++) {
        if (book[i]) continue;
        book[i] = true;
        a[k] = i + 1;
        dfs(k + 1);
        book[i] = false;
    }
}
int main() {
    cin >> n;
    dfs(0);
    return 0;
}
