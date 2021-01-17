#include<bits/stdc++.h>

using namespace std;

int Factorial(int n) {
    int ret = 1;
    for (int i = 2; i <= n; i++) {
        ret *= i;
    }
    return ret;
}

int Binormial(int n, int r) {
    return Factorial(n) / Factorial(r) / Factorial(n - r);
}

void printTriangle(int n) {
    for (int i = 0; i <= 5; i++) {
        for (int j = 0; j <= i; j++) {
            cout << Binormial(i, j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    printTriangle(n);
    return 0;
}
