#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int N = 100;
bool p[N];

void Init() {                         ///O(sqrt(n)logn)
    fill(p, p + N, true); ///假设每一个数都是素数
    p[0] = p[1] = false;  ///删除0 和1
    for (int i = 2; i * i <= N; i++) {
        if (p[i] == true) { ///遇到第一个数一定是素数
            for (int j = 2 * i; j < N; j += i)
                p[j] = false; ///保留这个素数，删除他的倍数
        }
    }
}

int main() {
    Init();
    for (int i = 0; i <= N; i++) {
        if (p[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
