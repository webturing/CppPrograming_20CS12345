#include <bits/stdc++.h>

using namespace std;
//#define  ll long long   //C-Style
//typedef long long ll;//C++ traditional
using ll = long long; //C++11 best
int Max(int a, int b = 0, int c = 0) {
    int ans = a;
    if (b > ans)
        ans = b;
    if (c > ans)
        ans = c;
    return ans;
}

int main() {
    cout << Max(3, 4, 5) << endl;
    cout << Max(3, 4) << endl; ///Max(3,4,0)
    cout << Max(3) << endl;    ///Max(3,0,0);

    // sort(a,a+n,less<int>());
    return 0;
}
