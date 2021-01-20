#include<stdio.h>
#include"array.h"

void sort(int a[], int s, int e) {
    if (s < e) {
        int k = s, i, t;
        for (i = s + 1; i <= e; i++)
            if (a[i] < a[k])
                k = i;
        if (k != s)
            t = a[s], a[s] = a[k], a[k] = t;
        sort(a, s + 1, e);
    }
}

int main() {

    int a[] = {5, 4, 6, 3, 7, 8, 0, 9, 1, 2};
    int n = sizeof(a) / sizeof(a[0]);

    print(a, n);
    sort(a, 0, n - 1);
    print(a, n);
}
