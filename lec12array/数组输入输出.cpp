#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[10];
    for (int i = 0; i < 10; i++) cin >> a[i];
    // for(int i=9;i>=0;i--)cout<<a[i]<<" ";
    // cout<<endl;
    // int t=a[0];a[0]=a[9];a[9]=t;
    for (int i = 0; i < 10; i++) {
        swap(a[i], a[9 - i]);
    }
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
