#include <bits/stdc++.h>

using namespace std;

int main() {
    cout << pow(2, 0) + pow(2, 8) + pow(2, 16) + pow(2, 24) << endl;
    int a[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
    int n = sizeof(a) / sizeof(a[0]);
// sort(a, a + n);
    // sort(a, a + n, greater<int>());
    // sort(a, a + n, less<int>());
    // memset(a, -1, sizeof(a));
    //fill(a, a + n, 1);
    reverse(a, a + n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;


}
