#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    char s[100]="foot";
    char t[100]="ball";
    //strcat(s,t);///s <- t
    int i=0;
    while(s[i]!='\0')i++;///strlen
    assert(i==4);
    int j=0;
    while(t[j]!='\0'){
        s[i+j]=t[j];
        j++;
    }
    s[i+j]=0;///
    cout<<s<<endl;

    return 0;
}
