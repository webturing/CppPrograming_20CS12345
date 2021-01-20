#include<bits/stdc++.h>

using namespace std;
const int R = 3;
const int C = 4;

int main() {
    int a[R][C] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)cin >> a[i][j];

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "7:" << a[1][2] << endl;
    cout << a[R - 1][C - 1] << endl;
    cout << a[0][0] + a[0][C - 1] + a[R - 1][0] + a[R - 1][C - 1];
    return 0;
}
