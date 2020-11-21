#include<bits/stdc++.h>
using namespace std;
void print(int a[], int n) {
	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
void input(int a[], int n) {
	for(int i = 0; i < n; i++)cin >> a[i];
}
int main() {
	int a[10];//&a[i]=a+i <=> *(a+i)=a[i]
	input(a, 10);
	print(a, 10);
	return 0;
}
