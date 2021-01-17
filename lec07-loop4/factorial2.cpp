#include<bits/stdc++.h>

using namespace std;

int main() {
    long long s = 0;
    long long m = 1;
    for (int n = 1; n <= 20; n++) {
        m = m * n;
        s = s + m;
    }
    cout << s << endl;
    return 0;
}
