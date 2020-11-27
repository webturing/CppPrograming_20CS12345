#include<bits/stdc++.h>

using namespace std;

int main() {
    int f[20 + 5];
    f[1] = f[2] = 1;
    for (int i = 3; i <= 20; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
    for (int i = 1; i <= 20; i++) {
        cout << f[i] << endl;
    }
    return 0;
}
