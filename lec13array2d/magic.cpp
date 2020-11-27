#include<bits/stdc++.h>

using namespace std;

int main() {
    int n = 5;
    int a[n][n];
    memset(a, 0, sizeof(a));
    int x0 = n - 1, y0 = n / 2;
    a[x0][y0] = 1;
    int x = (x0 + 1) % n;
    int y = (y0 + 1) % n;
    a[x][y] = 2;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
