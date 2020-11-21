#include<bits/stdc++.h>

using namespace std;

int Length(int n) {
    if (n < 10)return 1;
    return Length(n / 10) + 1;
}

int main() {
    cout << (Length(1234) == 4) << endl;
    cout << (Length(123) == 3) << endl;
    cout << (Length(12) == 2) << endl;
    cout << (Length(1) == 1) << endl;
    cout << (Length(0) == 1) << endl;
    return 0;
}
