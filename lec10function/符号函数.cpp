#include<bits/stdc++.h>

using namespace std;

int Sign(int x) {
    if (x > 0)return 1;
    if (x < 0)return -1;
    return 0;
}

int main() {
    int n;
    while (cin >> n) {
        cout << Sign(n) << endl;
    }
    return 0;
}
