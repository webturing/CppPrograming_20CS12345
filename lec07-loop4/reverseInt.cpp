#include<bits/stdc++.h>

using namespace std;

int main() {
    int n = 12321;
    int m = n;
    int t = 0;
    while (n > 0) {
        t = t * 10 + (n % 10);
        n = n / 10;
    }
    cout << t << endl;
    if (t == m) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
