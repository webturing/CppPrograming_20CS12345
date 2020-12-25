#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin>>n){

        int tot=0;
        for(int i=31;i>=0;i--){
            tot+=(n>>i)&1;
        }
        cout<<tot<<endl;
    }
    return 0;
}