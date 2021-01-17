#include<bits/stdc++.h>

using namespace std;

int main() {
    int x = 0;
    while (x < 100) {
        x++;
        if (x % 7 == 0)continue;
        if (x % 10 == 7)continue;
        if (x / 10 == 7)continue;
        cout << x << " ";

    }
    return 0;
}
