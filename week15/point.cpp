#include<bits/stdc++.h>
using namespace std;
struct Point {
	int x,y;//field 列/字段/属性
};
void input(Point &z){//写操作  
	cin>>z.x>>z.y;
}
void print(Point z){//只读操作 
	cout<<"("<<z.x<<","<<z.y<<")";
}
double dist(Point p,Point q){
	p.x++;
	double dx=p.x-q.x;
	double dy=p.y-q.y;
	return sqrt(dx*dx+dy*dy);
}
int main() {
	Point p,q;
	input(p);
	input(q);


	cout<<dist(p,q)<<endl;
	return 0;
}
