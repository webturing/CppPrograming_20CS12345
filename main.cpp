#include<bits/stdc++.h>

using namespace std;


int main() {
    long long a[4];
    while (cin >> a[0] >> a[1] >> a[2] >> a[3]) {
        sort(a, a + 4);
        cout << (a[2] * 100 + a[1] * 10 + a[0]) * a[3] << endl;
    }


    return 0;
}