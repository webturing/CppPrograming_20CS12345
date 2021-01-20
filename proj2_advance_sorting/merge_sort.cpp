#include<bits/stdc++.h>

using namespace std;
const int maxn = 100000 + 10;
int c[maxn], a[maxn], n;

void merge_sort(int *a, int left, int right) {
    if (left >= right)return;
    int mid = (left + right) / 2;
    merge_sort(a, left, mid);
    merge_sort(a, mid + 1, right);

    int i = left, j = mid + 1, k = left;
    while (i <= mid && j <= right)
        if (a[i] <= a[j])c[k++] = a[i++];
        else c[k++] = a[j++];

    while (i <= mid)c[k++] = a[i++];
    while (j <= right)c[k++] = a[j++];

    for (int x = left; x <= right; x++)a[x] = c[x];

}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)cin >> a[i];
    merge_sort(a, 0, n - 1);
    for (int i = 0; i < n; i++)cout << a[i] << " ";
    cout << endl;

    return 0;
}