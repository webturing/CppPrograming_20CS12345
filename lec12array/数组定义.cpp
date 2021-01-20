#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[10];
    cout << dec << a << endl;  ///�������ʼ��ַ a =&a[0]
    cout << dec << (a + 1) << endl;  ///&a[1]=a+1

    cout << dec << (a + 7) << endl;  ///&a[7]=a+7
    cout << dec << (&a[7]) << endl;  ///&a[7]=a+7
    return 0;
}
