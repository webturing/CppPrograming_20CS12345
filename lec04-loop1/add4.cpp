#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n == 0)break;
        int s = 0;
        while (n--) {
            int x;
            cin >> x;
            s = s + x;
        }
        cout << s << endl;
    }
    return 0;
}
