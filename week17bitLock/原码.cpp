#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=-1;
    int a[32]={0},j=0;

    while(n>0){
        a[j]=n&1;
        j++;
        n>>=1;
    }
    for(int i=j-1;i>=0;i--)
        cout<<a[i];
    return 0;
}
