#include<bits/stdc++.h>

using namespace std;

int main() {
    int a = 3, b = 4;
    bool p = a > b;//0
    bool q = a < b;//1
    cout << (not p) << endl;  //1
    cout << (!p) << endl;//1
    cout << (p and q) << endl;// 0
    cout << (p && q) << endl;
    cout << (p or q) << endl;//1
    cout << (p || q) << endl;

    return 0;
}
