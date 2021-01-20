#include<bits/stdc++.h>

using namespace std;

int main() {
    //cout<<"INT_MIN="<<INT_MIN<<endl;
    // cout<<"INT_MAX="<<INT_MAX<<endl;
    int n, x;
    cin >> n;
    cin >> x;
    int maxx, minn, sum;
    maxx = minn = sum = x;

    for (int i = 1; i <= n - 1; i++) {
        int x;
        cin >> x;
        s += x;
        if (x > maxx)maxx = x;
        if (x < minn)minn = x;
    }
    cout << minn << maxx << s << endl;


    return 0;
}
