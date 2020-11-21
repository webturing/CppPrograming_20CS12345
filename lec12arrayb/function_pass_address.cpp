#include<bits/stdc++.h>
using namespace std;
void f(int x[]) {
	x[0]++;//0x2ffe0
}

int main() {
	int a[] = {1, 2, 3};//0x2ffe0
	f(a);
	cout << a[0];
	return 0;
}
