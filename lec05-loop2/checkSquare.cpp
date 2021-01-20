#include<bits/stdc++.h>

using namespace std;

int main() {
    int n = 5555;
    bool flag = false;
    for (int x = 0; x <= n; x++) {
        if (x * x == n) {
            //	cerr<<x<<endl;
            flag = true;
            break;
        }
    }
    cout << flag << endl;

    return 0;
}
