#include<bits/stdc++.h>

using namespace std;
const int maxn = 4e5 + 100;
int data[maxn], head = maxn / 2, tail = head - 1;//双端队列
int n, a[maxn];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)cin >> a[i];
    for (int i = n - 1; i >= 0; --i) {
        if (head < tail)
            data[--head] = data[tail--];
        data[--head] = a[i];
    }
    cout << n << endl;
    while (head <= tail)cout << data[head++] << " ";
    return 0;
}