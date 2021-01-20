#include<bits/stdc++.h>

using namespace std;
const int maxn = 5000 + 1;
long long dp[maxn] = {0, 1};

int main() {
    char buffer[100];
    for (int i = 2; i <= maxn; i++) {
        sprintf(buffer, "%d", i);
        if (strchr(buffer, '7'))
            dp[i] = dp[i - 1];
        else
            dp[i] = dp[i - 1] + 1;
    }
    int X;
    cin >> X;
    while (X--) {
        int n;
        cin >> n;
        cout << dp[n] << endl;
    }


    return 0;
}