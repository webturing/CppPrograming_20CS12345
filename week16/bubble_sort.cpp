#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int *a,int n){
	for(int i=0;i<n-1;i++){
		for(int j=n-2;j>=i;j--)
		if(a[j]>a[j+1])swap(a[j],a[j+1]);
	}
}
void bubble_sort2(int *a,int n){
	for(int i=0;i<n-1;i++){
		for(int j=n-2;j>=i;j--)
		if(a[j]>a[j+1])swap(a[j],a[j+1]);
	}
}
int main(){
	int a[]={1,3,5,7,9,2,4,6,8,0};
	int n=sizeof(a)/sizeof(a[0]);
	bubble_sort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	
	return 0;
 } 
