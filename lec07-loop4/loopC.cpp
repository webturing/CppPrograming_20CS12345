#include<bits/stdc++.h>

using namespace std;

int main() {
    for (int n = 101; n <= 200; n++) {


        ///if n is a primer ++s and print n
        int flag = 1;///assume n is a primer
        for (int i = 2; i <= n - 1; i++) {
            if (n % i == 0) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            cout << n << endl;
        }


    }

    return 0;
}
