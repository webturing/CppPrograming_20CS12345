#include<bits/stdc++.h>

using namespace std;
const int maxn = 4e5 + 100;
int data[maxn], top = -1;//定义了一个栈

int main() {
    int n = 6;
    do {
        int x = n % 2;//x=n&1;
        data[++top] = x;
        n /= 2;//n>> =1;
    } while (n > 0);

    while (top != -1) {//~top
        cout << data[top--] ;//查询栈顶元素
    }

    return 0;
}