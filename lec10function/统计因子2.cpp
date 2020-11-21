#include<bits/stdc++.h>

using namespace std;

int main() {
    int n = 9;
    int cnt = 0;
    int m = sqrt(n);
    for (int i = 1; i <= m; i++) {
        if (n % i == 0) {
            ++cnt;
            if (i * i != n)
                ++cnt;
        }
    }
    cout << cnt << endl;
    return 0;
}
