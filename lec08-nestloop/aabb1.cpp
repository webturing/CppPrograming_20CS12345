#include<bits/stdc++.h>

using namespace std;

int main() {
    for (int n = 1100; n <= 9999; n++) {
        int high = n / 100, low = n % 100;
        if (high % 11 != 0 || low % 11 != 0)
            continue;
        int flag = 0;
        for (int x = 1; x <= 100; x++) {
            if (x * x == n) {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            cout << n << endl;
    }
    return 0;
}
