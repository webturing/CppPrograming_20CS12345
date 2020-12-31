#include<bits/stdc++.h>
using namespace std;
const int maxn=1000+10;
char data[maxn],s[maxn];
int top=-1;
bool ok(char *s){
    for(char *p=s;*p;++p){//*p a[i]
        if(strchr("([{",*p)) data[++top]=*p;
        else if(*p==')'){
            if(top==-1||data[top]!='(')return false;
            --top;
        }else if(*p==']'){
            if(top==-1||data[top]!='[')return false;
            --top;
        }else if(*p=='}'){
            if(top==-1||data[top]!='{')return false;
            --top;
        }
    }
    return top==-1;
}
int main(){
    while(cin>>s){
        top=-1;
        if(ok(s))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}