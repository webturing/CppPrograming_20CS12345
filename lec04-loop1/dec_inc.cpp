#include<bits/stdc++.h>

using namespace std;

int main() {
    int x = 9;
    cout << "first_line:" << (x++) << endl;// 8 9 10:
    ++x;//x+=1   x=x+1
    x++;
    x--;
    --x;
    cout << x << endl;
    int t = (++x);
    cout << t << endl;
    x = 9;
    int w = (x++);
    cout << w << endl;
    return 0;
}
