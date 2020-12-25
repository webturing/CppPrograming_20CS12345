#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    char s[100]="hello";
    char t[100]="aaaaaaaaaaaaaaaaaaaaaaaaa";
    memset(t,'\0',sizeof(t));
    int i=0;
    for(;s[i]!='\0';i++){
        t[i]=s[i];
    }
    t[i]=0;///
    strcpy(t,s);
    ///lvalue=rvalue
    cout<<t<<endl;

    return 0;
}
