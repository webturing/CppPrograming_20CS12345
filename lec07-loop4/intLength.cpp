#include<bits/stdc++.h>

using namespace std;

int main() {
    int n = 1234;
    int t = 0;
    while (n > 0) {
        t++;
        n = n / 10;
    }
    cout << t << endl;
    return 0;
}
