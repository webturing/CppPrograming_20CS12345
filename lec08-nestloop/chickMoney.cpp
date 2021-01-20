#include<bits/stdc++.h>

using namespace std;

int main() {
    int N = 100;
    int t = 0;
    int x, y, z;
    for (x = 0; 5 * x <= N; x++)
        for (y = 0; 3 * y <= N; y++) {
            z = N - x - y;
            if (x + y + z == N && 5 * x + 3 * y + z / 2 == N && z % 2 == 0)
                cout << x << " " << y << " " << z << endl;
            //++t;
        }
    return 0;
}
