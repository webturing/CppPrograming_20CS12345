#include<bits/stdc++.h>
using namespace std;
int main() {
	int a,b,c;
	cin>>a>>b>>c;
	int d=a;
	if(b>d)d=b;
	if(c>d)d=c;
	cout<<"max="<<d;
	return 0;
}
