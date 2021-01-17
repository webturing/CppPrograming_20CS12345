#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=4;
    cout<<(&x)<<endl;
  //  cin>>x;
  //  cout<<x<<endl;
    int* p=&x;
    x++;
    ++*p;
    cout<<x<<endl;
    cout<<"p="<<p<<endl;
    p++;
    cout<<"p="<<p<<endl;
    ++*p;
    cout<<x<<endl;
    return 0;
}
