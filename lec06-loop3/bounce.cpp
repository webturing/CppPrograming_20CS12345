#include<bits/stdc++.h>

using namespace std;

int main() {
    int n = 2;

    double h = 100, s = 0;
    s += h;
    for (int i = 0; i < n - 1; i++) {
        h = h / 2;
        s += 2 * h;
    }
    cout << s << endl;
    return 0;
}
