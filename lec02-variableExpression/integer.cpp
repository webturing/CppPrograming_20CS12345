#include<bits/stdc++.h>

using namespace std;

int main() {
    int n = 567;
    int a, b, c;
    c = n % 10;
    b = (n / 10) % 10;
    a = n / 100;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << "c=" << c << endl;
    return 0;
}
