#include<bits/stdc++.h>

using namespace std;

int main() {
    //cout<<"INT_MIN="<<INT_MIN<<endl;
    // cout<<"INT_MAX="<<INT_MAX<<endl;
    int n;
    cin >> n;
    int s = 0;
    // cout<<min(3,4)<<" "<<max(3,4)<<endl;
    //int min,max;
    int minn = INT_MAX, maxx = INT_MIN;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        s += x;
        if (x > maxx)maxx = x;
        if (x < minn)minn = x;
    }
    cout << minn << maxx << s << endl;


    return 0;
}
