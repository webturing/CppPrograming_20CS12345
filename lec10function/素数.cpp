#include<bits/stdc++.h>

using namespace std;

int main() {
    int n = 1000000007;
    if (n == 2) {
        cout << "Yes" << endl;
        return 0;
    }
    if (n % 2 == 0 || n < 2) {
        cout << "No" << endl;
        return 0;
    }
    int flag = 0;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        cout << n << " is a primer number." << endl;
    } else {
        cout << n << " is a compositor." << endl;
    }
    return 0;
}
