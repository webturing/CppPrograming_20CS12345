#include<bits/stdc++.h>

using namespace std;

int main() {
    int a[] = {6, 1, 3, 1, 6, 1, 12, 3, 123, 1, 23, 12, 3};
    int n = sizeof(a) / sizeof(a[0]);
    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << a[0] << " ";
    for (int i = 1; i < n; i++) {
        if (a[i - 1] != a[i]) {
            cout << a[i] << " ";
        }
    }
    return 0;
}
