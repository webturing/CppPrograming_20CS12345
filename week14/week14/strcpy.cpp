#include<bits/stdc++.h>
using namespace std;
int main() {
	char s[100]="helloworld";
	char t[100];
	// strcpy(t,s);
	char*p,*q;
	p=s;
	q=t;
	while(*q++=*p++);
	cout<<t<<endl;


	return 0;
}
