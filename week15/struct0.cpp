#include<bits/stdc++.h>
using namespace std;
typedef char Age;
typedef  float Weight;
typedef long long LL;
struct Person{
	char name[100];
	Age age;
	Weight weight;
} p={"jerry",17,30.0f},cs[100];
int main()
{
	int x;
	Age y;
	Weight z;
	LL t;

	
	strcpy(p.name,"tom");//p.name="tom";
	p.age=18;
	p.weight=52.5;

	cin>>p.name>>p.age>>p.weight;
	
	cout<<p.name<<" "<<(int)p.age<<" "<<p.weight<<endl;
	return 0;
 } 
