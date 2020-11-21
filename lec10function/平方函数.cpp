#include<bits/stdc++.h>

using namespace std;

int Square(int n) {
    int r = sqrt(n);
    if (r * r == n)
        return 1;
    return 0;
}

int main() {
    for (int i = 1; i <= 100; i++) {
        if (Square(i))
            cout << i << endl;
    }
    return 0;
}
