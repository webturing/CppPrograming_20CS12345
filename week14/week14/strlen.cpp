#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100]="helloworld";
   // for(int i=0;*(s+i);++i);
    
   	printf("%x\n",s);
    char *p;
	p=s;
//	*p=s;//error
    
    while(*p)++p;
    cout<<p-s<<endl;

    return 0;
}
