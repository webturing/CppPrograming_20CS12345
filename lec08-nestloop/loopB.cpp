#include<bits/stdc++.h>

using namespace std;

int main() {
    for (int a = 1; a <= 4; a++) {
        for (int b = 1; b <= 4; b++) {
            for (int c = 1; c <= 4; c++) {
                if (a == b || b == c || c == a)continue;
                cout << a << b << c << endl;
            }
        }
    }
    return 0;
}
