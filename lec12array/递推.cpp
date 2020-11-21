#include <bits/stdc++.h>

using namespace std;

int
main() {
    int a[10];
    a[0] = 1; //
    for (int i = 1; i < 10; i++) {
        a[i] = a[i - 1] * i;
    }
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    int m = 145;
    int s = 0;
    while (m > 0) {
        s += a[m % 10];
        m /= 10;
    }
    cout << s << endl;

    return 0;
}
