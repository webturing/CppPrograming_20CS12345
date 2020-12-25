#include<bits/stdc++.h>

using namespace std;

bool Cmp(int a, int b) {
    return abs(a) < abs(b);
}

int main() {
    ifstream cin("E.txt");
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)cin >> a[i];
    sort(a, a + n, Cmp);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";

    }
    cout << endl;
    return 0;
}
