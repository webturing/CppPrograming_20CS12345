#include<bits/stdc++.h>

using namespace std;

int main() {
    int x = 1;/*S1*/
    while (x <= 10/*S2*/) {
        cout << x << endl;/*S4*/
        x++;/*S3*/
    }
    for (int y = 1; y <= 10; y++) {
        cout << y << endl;
    }
//	y++;
    //for(S1;S2;S3){S4;} => S1 S2? S4 S3  S2? S4 S3
    for (int z = 10; z >= 0; z--) {
        cout << z << endl;
    }
    return 0;
}
