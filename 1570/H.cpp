#include<bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;
    double a[100], b[100], c, d;//a*b=c*d => d=a*b/c
    for (int i = 0; i < n; i++)cin >> a[i] >> b[i];
    cin >> c;
    for (int i = 0; i < n; i++) {
        double d = a[i] * b[i] / c;
        if (d <= 4.0)
            cout << fixed << setprecision(2) << d << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}