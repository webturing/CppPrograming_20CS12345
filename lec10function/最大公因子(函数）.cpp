#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int lcm(int a, int b) {
    return a * b / gcd(a, b)
}

int main() {//log(min(a,b))
    int a = 6, b = 8; //0
    cout << gcd(a, b) << endl;
    cout << lcm(a, b) << endl;
    return 0;
}
