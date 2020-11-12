#include<bits/stdc++.h>

using namespace std;

int Factorial(int n) {
    if (n <= 1) return 1;//�ݹ�������յ㣩
    else return n * Factorial(n - 1);//�ݹ���
}

int main() {
    cout << Factorial(5) << endl;

    for (int i = 0; i < 10; i++) {
        cout << Factorial(i) << endl;

    }
    int a = 3, b = 4;
    int m = (a > b) ? a : b;
    cout << m << endl;

    return 0;
}
