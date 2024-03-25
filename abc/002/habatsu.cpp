#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<set<int>> members(n);

    for(int i=0; i<m; i++) {
        int x, y; cin >> x >> y;
        x--;
        y--;
        members[x].insert(y);
        members[y].insert(x);
    }

    int ans = 0;
    for(int bit=0; bit<(1<<n); bit++) {
        bitset<12> bs(bit);
        int num = bs.count();
        if(num <= ans) continue;

        bool flag = true;
        for(int i=0; i<n; i++) {
            for(int j=0; j<i; j++) {
                if((bit & (1<<i)) && (bit & (1<<j)) && members[i].find(j) == members[i].end()) flag = false;
            }
        }
        if(flag) ans = num;
    }
    cout << ans << endl;
}