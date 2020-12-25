#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c=48;//48
    cout<<c<<"<->"<<(int)(c)<<endl;
    for(int i=48;i<48+10;i++){
        cout<<(char)i<<"  ";
    }cout<<endl;
    for(char i='A';i<'A'+26;i++){
        cout<<i<<" ";
    }cout<<endl;
    for(char i='a';i<='z';i++){
        cout<<i<<" ";
    }cout<<endl;
    cout<<(char)('x'-32)<<endl;
      cout<<(char)('H'+32)<<endl;
    return 0;
}
