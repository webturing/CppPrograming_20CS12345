#include<bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a > b) {
        int t = a;
        a = b;
        b = t;
    }
    cout << a << " " << b;
//	cout<<min(a,b)<<" "<<max(a,b);
    return 0;
}
