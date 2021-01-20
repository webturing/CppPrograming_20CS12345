#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[]={1,3,3,1,6,4,5,6,5};
	int n=sizeof(a)/sizeof(a[0]);
	sort(a,a+n);
	for(int i=0;i<n;i++)cout<<a[i]<<" ";cout<<endl;
	
	int m=unique(a,a+n)-a;//1 1 3 3 6 => 1 3 6 * *
	for(int i=0;i<n;i++)cout<<a[i]<<" ";cout<<endl;
	
	return 0;
 } 
