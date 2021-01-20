#include<bits/stdc++.h>
using namespace std;
int main() {
	char s[100]="helloworld";
	char t[100]="Tom say:";
	
	char*p,*q;
	p=s;
	q=t;
	while(*q)++q;
	while(*q++=*p++);
	cout<<t<<endl;


	return 0;
}
