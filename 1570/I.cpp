#include<bits/stdc++.h>

using namespace std;
struct Node {
    int key;
    int count;
} nodes[10000];
int m = 0;
int freq[30000];

bool cmp(Node x, Node y) {
    if (x.count != y.count)
        return x.count > y.count;
    return x.key < y.key;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        ++freq[t];
    }
    for (int i = 1; i <= 30000; i++) {
        if (freq[i])
            nodes[m++] = {i, freq[i]};

    }
    sort(nodes, nodes + m, cmp);
    for (int i = 0; i < m && nodes[i].count == nodes[0].count; i++) {
        cout << nodes[i].key << " " << nodes[i].count << endl;
    }

    return 0;
}