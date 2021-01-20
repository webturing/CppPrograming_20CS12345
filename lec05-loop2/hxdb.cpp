#include<bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    while (cin >> a >> b >> c) {
        int flag = 0;
        for (int x = 10; x <= 100; x++) {
            if (x % 3 == a and x % 5 == b and x % 7 == c) {
                //cerr<<x%3<<" "<<x%5<<" "<<x%7<<endl;
                cout << x << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            cout << "No answer" << endl;
        }
    }
    return 0;
}
