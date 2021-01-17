
#include <bits/stdc++.h>
using namespace std;
char s[100 + 10];
int main() {
    while (cin >> s) {
        auto n = strlen(s);
        char q = *max_element(s, s + n);
        for (char* p = s; *p; ++p) {
            cout << *p;
            if (*p == q) cout << "(max)";
        }
        cout << endl;
    }
    return 0;
}
