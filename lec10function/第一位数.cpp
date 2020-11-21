#include<bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    while (n >= 10) {
        n /= 10;
    }
    cout << n << endl;
    return 0;
}
