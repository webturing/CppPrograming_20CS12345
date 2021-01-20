#include<bits/stdc++.h>

using namespace std;

int main() {
    int n = 2000000000;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {//O(n��
        if (n % i == 0) {
            ++cnt;
        }
    }
    cout << cnt << endl;
    return 0;
}
