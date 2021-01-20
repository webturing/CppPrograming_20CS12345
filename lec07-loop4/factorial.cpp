#include<bits/stdc++.h>

using namespace std;

int main() {
    long long s = 0;
    for (int n = 1; n <= 20; n++) {
        long long m = 1;
        for (int i = 2; i <= n; i++) {
            m = m * i;
        }
        s = s + m;
    }
    cout << s << endl;
    return 0;
}
