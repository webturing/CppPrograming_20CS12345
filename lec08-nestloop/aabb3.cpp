#include<bits/stdc++.h>

using namespace std;

int main() {
    for (int a = 1; a <= 9; a++) {
        for (int b = 0; b <= 9; b++) {
            int n = a * 1100 + b * 11;
            cout << n << endl;
        }
    }
    return 0;
}
