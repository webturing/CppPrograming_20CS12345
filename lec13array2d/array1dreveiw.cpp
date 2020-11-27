#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
    int n = sizeof(a) / sizeof(a[0]);
    int Sum = 0;
    for (int i = 0; i < n; i++) {
        Sum += a[i];
    }
    cout << "Sum=" << Sum << endl;
    int Max = INT_MIN;  // Min=INT_MAX,
    for (int i = 0; i < n; i++) {
        if (a[i] > Max) Max = a[i];
    }
    cout << "Max=" << Max << endl;
    int key = 7;
    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            pos = i;
            break;
        }
    }
    if (pos >= 0) {
        cout << key << " was found at first position:" << pos << endl;
    } else {
        cout << "NOT Found!" << endl;
    }
}
