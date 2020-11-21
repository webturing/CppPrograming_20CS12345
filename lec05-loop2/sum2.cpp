#include<bits/stdc++.h>

using namespace std;

int main() {
    long long start = clock();

    int s = 0;
    for (int x = 1; x <= 1e9; x++) {
        s++;
    }
    cout << s << endl;

    long long end = clock();
    cout << 1.0 * (end - start) / CLOCKS_PER_SEC << endl;

    return 0;
}
