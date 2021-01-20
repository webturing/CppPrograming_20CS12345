#include<bits/stdc++.h>

using namespace std;

void print(int a[], int n) {
    //::n=10;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void input(int a[], int n) {
    for (int i = 0; i < n; i++)cin >> a[i];
}

void sort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 2; j >= i; j--) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
        print(a, n);
    }
}

const int n = 10;

int main() {
    int a[n];//&a[i]=a+i <=> *(a+i)=a[i]
    input(a, n);
    sort(a, n);
    print(a, n);
    return 0;
}
