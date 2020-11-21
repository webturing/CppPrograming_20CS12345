#include<bits/stdc++.h>

using namespace std;

int main() {
    ///int a[10]={1,3,5,7,9,2,4,6,8,0};///initializer
    ///int a[10];//without initializing
    ///int a[10]={1,2,3};///partially initialized
    int a[] = {1, 3, 4,};///a.length==3
    ///int b[];//illegal
    ///int d[3]={1,2,3,4};////illegal
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    a[5]++;
    return 0;
}
