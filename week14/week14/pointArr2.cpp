#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10];
    for(int *p=a;p!=(a+10);++p)
        cin>>*p;
    for(int *p=a+9;p!=a-1;--p){
        cout<<*p<<" ";
    }


    return 0;
}
