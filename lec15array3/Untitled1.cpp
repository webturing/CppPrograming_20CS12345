#include<bits/stdc++.h>

using namespace std;

int main() {
    int n = 4;
    int m = 2 * n + 1;
    int a[m][m];
    memset(a, 0, sizeof(a));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = max(abs(i - n), abs(j - n));
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
