#include<bits/stdc++.h>

using namespace std;

int main() {
    int n = 153;
    while (cin >> n) {
        if (n == 0)break;
        int a = n / 100 % 10;
        int b = n / 10 % 10;
        int c = n % 10;
        if (n == a * a * a + b * b * b + c * c * c) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }


    return 0;
}
