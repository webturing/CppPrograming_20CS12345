#include<bits/stdc++.h>

using namespace std;
const int maxn = 1000 + 10;
int data[maxn], head = 0, tail = -1;//data[head,tail]

int main() {
    head = 0, tail = -1;
    for (int i = 0; i < 10; i++)data[++tail] = i;//入队

    while (head <= tail) {
        cout << data[head++] << endl;
    }

    return 0;
}