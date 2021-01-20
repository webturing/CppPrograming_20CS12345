#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int sign = 0;
    if (n > 0)sign = 1;
    if (n < 0)sign = -1;
    if (n == 0)sign = 0;
    cout << sign;
    return 0;
}
