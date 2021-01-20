#include<bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    int small, mid, big;

    cin >> a >> b >> c;
    small = a;
    if (b < small)small = b;
    if (c < small)small = c;
    big = a;
    if (b > big)big = b;
    if (c > big)big = c;

    mid = a + b + c - small - big;

    cout << small << " " << mid << " " << big;
    return 0;
}
