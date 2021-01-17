#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    while (cin >> n) {
        int a = 1;
        for (int x = n - 1; x >= 1; x--) {
            a = 2 * (a + 1);
        }
        cout << a;
    }
    return 0;
}
