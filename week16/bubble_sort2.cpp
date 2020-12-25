#include<bits/stdc++.h>
using namespace std;
bool Inc(int a,int b){
	return a<b;
}

bool Dec(int a,int b){
	return a>b;
}

void bubble_sort(int *a,int n,bool(*comp)(int,int)){
	for(int i=0;i<n-1;i++){
		for(int j=n-2;j>=i;j--)
		if(!comp(a[j],a[j+1]))swap(a[j],a[j+1]);
	}
}

int main(){
	int a[]={1,3,5,7,9,2,4,6,8,0};
	int n=sizeof(a)/sizeof(a[0]);
	bubble_sort(a,n,Dec);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
 } 
