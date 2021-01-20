#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///a[x]=*(a+x)
    int a[]={1,2,3,4,5,6,7,8,9,0};
   // cout<<a[-1]<<endl;
    int *p=a;
   // p++;

    cout<<p[3]<<endl;///*(p+3)=4
    cout<<(p+5)[2]<<endl;///*(p+5+2)=8
    cout<<(p-4)[6]<<endl;///3
    cout<<(p+2)[-1]<<endl;///2

    return 0;
}
