#include<bits/stdc++.h>

using namespace std;

int main() {
    int x = 0;
    x = x + 5;
    x = x - 1;
    cout << x << endl;
    x += 5;// x op= y <=> x= x op y
    x -= 1;
    x -= 2;
    cout << x << endl;
    x += 500;
    x *= 2;
    x /= 2;
    x %= 10;
    x += 1;
    x++;
    ++x;

    x -= 1;
    --x;
    x--;

    return 0;
}
