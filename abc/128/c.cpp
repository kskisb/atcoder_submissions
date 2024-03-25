#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<int> k(m);
    vector<vector<int>> s(m);
    vector<int> p(m);
    for(int i=0; i<m; i++) {
        cin >> k[i];
        s[i].resize(k[i]);
        for(int j=0; j<k[i]; j++) {
            cin >> s[i][j];
            s[i][j]--;
        }
    }
    for(int i=0; i<m; i++) cin >> p[i];

    int ans = 0;
    for(int bit=0; bit<(1<<n); bit++) {
        int cnt = 0;
        for(int i=0; i<m; i++) {
            int on = 0;
            for(int j=0; j<k[i]; j++) {
                if(bit & (1<<s[i][j])) on++;
            }
            if(on%2 == p[i]) cnt++;
        }
        if(cnt == m) ans++;
    }
    cout << ans << endl;
}