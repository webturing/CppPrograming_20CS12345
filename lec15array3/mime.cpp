#include<bits/stdc++.h>

using namespace std;

//3 3 1
//1 1
int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    memset(a, 0, sizeof(a));
    int k;
    cin >> k;
    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        a[x][y] = 9; //place mime
    }
    for (int x = 0; x < n; x++)
        for (int y = 0; y < m; y++) {
            if (a[x][y] == 9)continue;
            int t = 0;
            if (x - 1 >= 0 && y - 1 >= 0 && a[x - 1][y - 1] == 9)++t;

            ///**
            a[x][y] = t;
        }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 9)cout << "* ";
            else
                cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
