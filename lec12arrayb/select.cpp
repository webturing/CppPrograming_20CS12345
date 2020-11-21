#include<bits/stdc++.h>
using namespace std;
void print(int a[], int n) {
	//::n=10;
	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
void input(int a[], int n) {
	for(int i = 0; i < n; i++)cin >> a[i];
}
void sort(int a[], int n) {
	for(int i = 0; i < n - 1; i++) {
		//1. assume a[0:i-1] is sorted
		//2. find min index k in a[i,n-1]
		//3. swap(a[i],a[k]
		int k = i;
		for(int j = i + 1; j <= n - 1; j++) {
			if(a[j] < a[k])k = j;
		}
		if(i!=k)
			swap(a[i], a[k]);
		print(a,n);//dump
	}
}
const int n = 10;
int main() {
	int a[n];//&a[i]=a+i <=> *(a+i)=a[i]
	input(a, n);
	sort(a, n);
	print(a, n);
	return 0;
}
