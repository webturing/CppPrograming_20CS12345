#include<bits/stdc++.h>
using namespace std;
struct Rect {
	int num,len,wid;
} R[10000+10];
int T,n;
bool cmp(Rect a,Rect b) {
	if(a.num!=b.num)return a.num<b.num;
	if(a.len!=b.len)return a.len<b.len;
	return a.wid<b.wid;
}
int main() {
	freopen("M.in","r",stdin);
	cin>>T;
	while(T--) {
		cin>>n;
		for(int i=0; i<n; i++) {
			cin>>R[i].num>>R[i].len>>R[i].wid;
			if(R[i].len<R[i].wid)swap(R[i].len,R[i].wid);
		}
		sort(R,R+n,cmp);
		cout<<R[0].num<<" "<<R[0].len<<" "<<R[0].wid<<endl;
		for(int i=1; i<n; i++) {
			if(R[i].num==R[i-1].num
			        &&R[i].len==R[i-1].len
			        &&R[i].wid==R[i-1].wid)	continue;

			cout<<R[i].num<<" "<<R[i].len<<" "<<R[i].wid<<endl;
		}
	}

	return 0;
}
