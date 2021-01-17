#include <bits/stdc++.h>

using namespace std;

int main() {
    int m = 5;
    int a[m][m];
    memset(a, 0, sizeof(a));
    int x = m - 1, y = m / 2;
    a[x][y] = 1;
    for (int i = 2; i <= m * m; i++) {
        int nx = (x + 1) % m;
        int ny = (y + 1) % m;
        if (a[nx][ny] > 0) {
            nx = (x - 1 + m) % m;
            ny = y;
        }
        a[nx][ny] = i;
        x = nx;
        y = ny;
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
