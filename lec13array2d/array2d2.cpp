#include<bits/stdc++.h>

using namespace std;

int main() {
    int a[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    cout << a[0][4] << endl;
    cout << a[1][0] << endl;
    for (int i = 0; i < 12; i++)cin >> a[0][i];
    for (int i = 0; i < 12; i++) {
        cout << a[i / 4][i % 4] << " ";
        if (i % 4 == 3)
            cout << endl;
    }
    return 0;
}
