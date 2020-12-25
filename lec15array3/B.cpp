#include<bits/stdc++.h>

using namespace std;

int main() {
    ifstream cin("B.txt");
    int a[4][13];
    //S->0 H->1 C->2 D->3
    for (int i = 0; i < 52; i++)a[0][i] = 1;
    int T;
    cin >> T;
    while (T--) {
        char ch;
        int d;
        cin >> ch >> d;
        d--;
        if (ch == 'S')
            --a[0][d];
        if (ch == 'H')--a[1][d];
        if (ch == 'C')--a[2][d];
        if (ch == 'D')--a[3][d];
    }
    for (int i = 0; i < 52; i++) {
        cout << a[0][i];
        if (i % 13 == 12)cout << endl;
        else cout << " ";
    }
    return 0;
}
