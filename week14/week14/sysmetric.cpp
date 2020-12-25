#include<bits/stdc++.h>
using namespace std;
int main() {
	char s[100]="abccba";
	char *p=s;
	char *q=s;
	while(*q)++q;
	--q;
	while(p<q){
		if(*p!=*q){
			cout<<"NO"<<endl;
			return 0;
		}
		++p;
		--q;
	}
	cout<<"YES"<<endl;
	


	return 0;
}
