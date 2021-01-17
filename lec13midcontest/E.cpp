#include<bits/stdc++.h>

using namespace std;

int main() {
    double a[3], s, S;
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    if (a[0] + a[1] <= a[2]) {
        cout << "Input error!" << endl;
    } else {
        s = (a[0] + a[1] + a[2]) / 2;
        S = sqrt(s * (s - a[0]) * (s - a[1]) * (s - a[2]));
        cout << fixed << setprecision(2) << S << endl;
    }

    return 0;
}
