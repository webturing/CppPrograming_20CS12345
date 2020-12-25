#include<bits/stdc++.h>

using namespace std;
using ll = long long;
const int N = 20000000 + 10;
bool prime[N];

void Init() { ///O(sqrt(n)logn)
    fill(prime, prime + N, true); ///假设每一个数都是素数
    prime[0] = prime[1] = false; ///删除0 和1
    for (int i = 2; i * i <= N; i++) {
        if (prime[i] == true) { ///遇到第一个数一定是素数
            for (int j = 2 * i; j < N; j += i)
                prime[j] = false; ///保留这个素数，删除他的倍数
        }
    }
}

bool goldbach(int n) {
    for (int p = 3; p <= n / 2; p += 2) {
        if (prime[p] && prime[n - p]) {
            // cout<<p<<"+"<<n-p<<"="<<n<<endl;
            return true;
        }
    }
    return false;
}

int main() {

    ll start = clock();
    Init();///
    for (int n = 6; n <= N; n += 2) {
        if (!goldbach(n)) {
            cout << "Congratulations! The goldbach theory is wrong!" << endl;
        }
    }

    ll end = clock();
    cout << (end - start) / 1000.0 << " Second(s)." << endl;
    return 0;
}
