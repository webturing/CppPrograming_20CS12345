#include<bits/stdc++.h>

using namespace std;

int main() {
    //cout<<1.0*50000*50000<<endl;
    int m = 10;
    cin >> m;
    double s = 1;
    for (int i = 2; i <= m; i++) {
        s -= 1.0 / ((double) i * i);
    }
    cout << s << endl;


    return 0;
}
