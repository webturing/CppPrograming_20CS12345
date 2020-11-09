#include<bits/stdc++.h>

using namespace std;

int Primer(int n) {
    if (n < 2)return 0;
    if (n == 2)return 1;
    if (n % 2 == 0)return 0;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)return 0;
    }
    return 1;
}

int main() {
    int N = 100;
    for (int n = 1; n <= N; n++) {
        if (Primer(n)) {
            cout << n << endl;
        }
    }
    return 0;
}
