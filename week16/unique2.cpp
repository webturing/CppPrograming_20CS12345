#include<bits/stdc++.h>
using namespace std;

int main() {
	int a[]= {1,3,3,1,6,4,5,6,5};
	int n=sizeof(a)/sizeof(a[0]);
	sort(a,a+n);
	cout<<a[0]<<" ";
	for(int i=1; i<n; i++) {
		if(a[i]!=a[i-1])
			cout<<a[i]<<" ";
	}
	cout<<endl;



	return 0;
}
