
#include <bits/stdc++.h>
using namespace std;
int a[20], n, target;
bool book[20], flag;
void dfs(int k) {
    if(flag||k>=n){
        int tot=0;
        for(int i=0;i<n;i++)
            if(book[i])tot+=a[i];
        if(tot==target)
            flag=true;
        return;
    }
    book[k]=false;
    dfs(k+1);
    book[k]=true;
    dfs(k+1);
}
int main() {
while (cin >> n) {
    for (int i = 0; i < n; i++) cin >> a[i];
    int tot = accumulate(a, a + n, 0);
    if (tot & 1) {
        cout << "Sorry,I can't!" << endl;
        continue;
    }
    fill(book, book + n, false);
    flag = false;
    target = tot >> 1;
    dfs(0);
    if (flag) {
        cout << "Of course,I can!" << endl;
    } else {
        cout << "Sorry,I can't!" << endl;
    }
    }
    return 0;
}
