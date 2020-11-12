#include<bits/stdc++.h>

using namespace std;

void Print(int n) {
    while (n > 0) {
        cout << n % 10 << " ";
        n /= 10;
    }
}

int main() {
    Print(123456);
    return 0;
}
