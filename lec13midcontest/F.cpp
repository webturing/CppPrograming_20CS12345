#include<bits/stdc++.h>

using namespace std;

int main() {
    double f[22] = {0, 1, 2,};
    for (int i = 3; i < 22; i++)f[i] = f[i - 1] + f[i - 2];

    int n;
    cin >> n;
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += f[i + 1] / f[i];
    }
    cout << fixed << setprecision(3) << sum;
    return 0;
}