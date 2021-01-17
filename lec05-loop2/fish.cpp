#include<bits/stdc++.h>

using namespace std;

int main() {
    int x = 0;
    while (1) {
        x++;
        if (x % 5 != 1)continue;
        int y = x - 1 - x / 5;
        if (y % 5 != 1)continue;
        int z = y - 1 - y / 5;
        if (z % 5 != 1)continue;
        z = z - 1 - z / 5;
        if (z % 5 != 1)continue;
        z = z - 1 - z / 5;
        if (z % 5 != 1)continue;
        cout << x << " ";
        break;

    }
    return 0;
}
