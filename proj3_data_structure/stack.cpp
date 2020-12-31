#include<bits/stdc++.h>

using namespace std;
const int maxn = 4e5 + 100;
int data[maxn], top = -1;//定义了一个栈

int main() {
    for (int i = 0; i < 10; i++) {
        data[++top] = i;//入栈
    }
    while (top != -1) {
        cout << data[top] << " ";//查询栈顶元素
        --top;//退栈
    }

    return 0;
}