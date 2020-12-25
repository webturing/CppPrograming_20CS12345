#include<bits/stdc++.h>

using namespace std;

int main() {
    int a[1000];
    int n = 0;
    int x;
    while (cin >> x) {
        a[n++] = x;
    }
    cout << n << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
