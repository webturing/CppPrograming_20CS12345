#include<bits/stdc++.h>

using namespace std;

int Sum(int n) {
    if (n < 10)return n;
    return Sum(n / 10) + (n % 10);
}

int main() {
    cout << (Sum(1234) == 10) << endl;
    cout << (Sum(123) == 6) << endl;
    cout << (Sum(12) == 3) << endl;
    cout << (Sum(1) == 1) << endl;
    cout << (Sum(10) == 1) << endl;
    return 0;
}
