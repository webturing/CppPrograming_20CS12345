#include<bits/stdc++.h>

using namespace std;

void f(int x)//pass by value
{
    cout << "In sub function f:&x=" << (&x) << endl;
    x++;
}

int main() {
    int x = 3;
    cout << "In function main:&x=" << (&x) << endl;
    f(x);
    cout << x;
    return 0;
}
