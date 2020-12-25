#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10];
    int *p=a;
    for(int i=0;i<10;i++){
        cin>>*p;
        p++;
    }
    p=a;
    for(int i=0;i<10;i++){
        cout<<*p<<endl;
        p++;
    }

    return 0;
}
