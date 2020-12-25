#include <bits/stdc++.h>

using namespace std;
//#define  ll long long   //C-Style
//typedef long long ll;//C++ traditional
using ll = long long; //C++11 best
int Max(int a, int b, int c) {
    return 0;
}

int Max(int a, int b) {
    return 1;
}

ll Max(ll a, ll b) {
    return 3;
}

int main() {
    cout << sizeof(long) << endl;
    cout << sizeof(long long) << endl;
    cout << Max(3, 4, 5) << endl;
    cout << Max(3, 4) << endl;
    return 0;
}
