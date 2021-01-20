#include<iostream>

using namespace std;
const int maxn=50+50;
using ll =long long;
ll F[maxn]={0,1,1};
int main(){
	for(int i=3;i<=maxn;i++)F[i]=F[i-1]+F[i-2];
	int n;
	cin>>n;
	cout<<F[n];
	
	return 0;
}