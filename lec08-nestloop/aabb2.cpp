#include<bits/stdc++.h>

using namespace std;

int main() {
    for (int x = 32; x * x <= 9999; x++) {
        int n = x * x;
        if (n / 100 % 11 == 0 && n % 100 % 11 == 0) {
            cout << n << endl;
        }
    }
    return 0;
}
