#include<bits/stdc++.h>

using namespace std;

int main() {
    //ofstream cout("1.txt");
    int s = 0;
    for (int x = 1; x <= 100; x++) {
        if (x % 10 == 7 || x / 10 == 7 || x % 7 == 0) {

            ++s;
        }
    }
    cout << s << endl;
    return 0;
}
