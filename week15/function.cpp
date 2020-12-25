#include<bits/stdc++.h>
using namespace std;
void f(int x) {//pass by value
	cout<<"In funciton f: &x="<<(&x)<<endl;
	++x;
}
void g(int &x) { //pass by ref
	cout<<"In funciton g: &x="<<(&x)<<endl;
	++x;
}
int main() {
	int x=3;
	cout<<"In funciton main: &x="<<(&x)<<endl;
	//f(x);
	g(x);
	cout<<x<<endl;
	return 0;
}
