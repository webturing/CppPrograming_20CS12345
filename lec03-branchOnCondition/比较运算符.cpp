#include<bits/stdc++.h>

using namespace std;

int main() {
    //> >= < <= == !=
    int a = 4, b = 3;
    cout << (a > b) << endl;//1 means true
    cout << (a >= b) << endl;//1 true
    cout << (a < b) << endl;//0
    cout << (a <= b) << endl;//0
    cout << (a == b) << endl;//0
    cout << (a != b) << endl;//1
    cout << (a = b) << endl;//3
    cout << (5 > 4 > 3) << endl;//1>3=0
    cout << (3 < 4 < 2) << endl;
    return 0;
}
