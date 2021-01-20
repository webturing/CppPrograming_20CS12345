#include<bits/stdc++.h>

using namespace std;

int Length(int n) {
    int ret = 0;
    while (n > 0) {
        n /= 10;
        ++ret;
    }
    return ret;
}

int Sum(int n) {
    int tot = 0;
    while (n > 0) {
        int d = n % 10;
        tot += d;
        n /= 10;
    }
    return tot;
}

int Reverse(int n) {
    int s = 0;
    while (n > 0) {
        int d = n % 10;
        s = s * 10 + d;
        n /= 10;
    }
    return s;
}

int Sysmetric(int n) {
    return n == Reverse(n);
}

int main() {//log(min(a,b))
    int a = 12345;
    cout << Length(a) << endl; //5
    cout << Sum(a) << endl; //15
    cout << Reverse(a) << endl; //54321
    return 0;
}
