#include<bits/stdc++.h>

using namespace std;

int main() {
    int n = 17;
    int flag = 1;
    for (int i = 2; i <= n - 1; i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
    cout << flag << endl;

    return 0;
}
