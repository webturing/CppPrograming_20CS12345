#include<bits/stdc++.h>

using namespace std;

int main() {//log(min(a,b))
    int a = 6, b = 8; //0
    while (b != 0) {
        int c = a % b;
        a = b;
        b = c;
    }
    cout << a << endl;
    return 0;
}
