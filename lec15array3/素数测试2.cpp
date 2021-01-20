#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int N = 2000000;

bool prime(int n) { //O(sqrt(n))
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool goldbach(int n) {
    for (int p = 3; p <= n / 2; p += 2) {
        if (prime(p) && prime(n - p)) {
            // cout<<p<<"+"<<n-p<<"="<<n<<endl;
            return true;
        }
    }
    return false;
}

int main() {

    ll start = clock();
    for (int n = 6; n <= N; n += 2) {
        if (!goldbach(n)) {
            cout << "Congratulations! The goldbach theory is wrong!" << endl;
        }
    }

    ll end = clock();
    cout << (end - start) / 1000.0 << " Second(s)." << endl;
    return 0;
}
