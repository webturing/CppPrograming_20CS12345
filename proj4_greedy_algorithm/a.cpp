#include<bits/stdc++.h>

using namespace std;

struct Item {
    int begin, end;
} items[100];

bool cmp(Item a, Item b) {
    return a.end < b.end;
}


int main() {
    freopen("a.in", "r", stdin);
    int n, i;
    cin >> n;
    for (i = 0; i < n; i++)cin >> items[i].begin >> items[i].end;
    sort(items, items+n, cmp);
    int tot = 0;
    int end = 0;
    for (i = 0; i < n; i++) {
        if (items[i].begin >= end) {
            ++tot;
            end = items[i].end;

        }
    }
    cout << tot;
    return 0;
}
