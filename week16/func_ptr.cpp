#include<bits/stdc++.h>
using namespace std;
int Add(int a,int b){return a+b;}
int Sub(int a,int b){return a-b;}
int Mul(int a,int b){return a*b;}
int Div(int a,int b){return a/b;}
int main(){
	int a=3,b=4;
	int (*f)(int,int);
	f=Add;
	cout<<f(a,b)<<endl;//7
	f=Sub;
	cout<<f(a,b)<<endl;
	
	return 0;
 } 
