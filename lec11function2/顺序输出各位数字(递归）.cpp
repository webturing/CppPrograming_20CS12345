#include<bits/stdc++.h>

using namespace std;

void Print(int n) {
    if (n < 10) {
        cout << n << " ";
        return;
    }
    Print(n / 10);
    cout << n % 10 << " ";

}

int main() {
    Print(123456);
    return 0;
}
