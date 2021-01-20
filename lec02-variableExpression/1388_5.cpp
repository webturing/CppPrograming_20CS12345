#include<bits/stdc++.h>

using namespace std;

int main() {
    int x0 = 0, y0 = 0, x1 = 1, y1 = 1;
    while (cin >> x0 >> y0 >> x1 >> y1) {
        double dx = x1 - x0;
        double dy = y1 - y0;
        //double z=sqrt(dx*dx+dy*dy);
        double z = hypot(dx, dy);
        cout << fixed << setprecision(2) << z << endl;
    }
    return 0;
}
