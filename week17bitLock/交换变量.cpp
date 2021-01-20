#include<bits/stdc++.h>
using namespace std;
int main(){
	int a=5,b=1;
//	a^=b;// a=6 b=1
//	b^=a;// a=6 b=5
//	a^=b;// a=1 b=5
	a^=b^=a^=b;
	cout<<a<<" "<<b<<endl;
	
}
