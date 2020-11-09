#include<bits/stdc++.h>

using namespace std;

int main() {
    int a = 999999999, b = 888888888; //0
    for (int i = a + b; i >= 1; --i) {
        if (a % i == 0 && b % i == 0) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
