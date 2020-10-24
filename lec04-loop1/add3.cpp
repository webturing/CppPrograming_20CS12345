#include<bits/stdc++.h>

using namespace std;

//Sample Input:
//3
//1 2
//3 4
//5 6
//Sample Output:
//3
//7
//11
int main() {
    int T;
    cin >> T;//T=3
    while (T > 0) {
        int x, y;
        cin >> x >> y;
        cout << x + y << endl;
        T--;
    }


    return 0;
}
