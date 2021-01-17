#include<bits/stdc++.h>

using namespace std;

int main() {
    int h = 15, m = 17, s = 12;
    cout << setw(4) << setfill('0') << s << endl;
    int x = 246, y = 0xff, z = 0123, t = 0128;
    cout << dec << x << endl;//dec
    cout << hex << x << endl;//hex
    cout << oct << x << endl;//oct
    cout << "y=" << dec << y << endl;//255
    cout << "z=" << dec << z << endl;//1*64+2*8+3
    return 0;
}
