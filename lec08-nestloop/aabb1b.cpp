#include<bits/stdc++.h>

using namespace std;

int main() {
    for (int n = 1100; n <= 9999; n++) {
        int high = n / 100, low = n % 100;
        if (high % 11 != 0 || low % 11 != 0)
            continue;
        double x = sqrt(n);
        if (x == int(x))
            cout << n << endl;
    }
    return 0;
}
