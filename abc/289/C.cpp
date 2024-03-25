#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using veci = vector<int>;
using vecll = vector<ll>;
using vecd = vector<double>;
using vveci = vector<veci>;
using vvecll = vector<vecll>;
using vvecd = vector<vecd>;
using Graph = vector<vector<int>>;
#define rep(i, l, r) for(int i=l; i<r; i++)
#define rrep(i, l, r) for(int i=r-1; i>=l; i--)

int main() {
    int N, M; cin >> N >> M;
    veci C(M);
    vveci a(M, veci());
    rep(i, 0, M) {
        cin >> C[i];
        a[i].resize(C[i]);
        rep(j, 0, C[i]) cin >> a[i][j];
    }

    int ans = 0;
    rep(bit, 0, (1<<M)) {
        vector<bool> check(N, false);
        rep(i, 0, M) {
            if(bit & (1<<i)) {
                rep(j, 0, a[i].size()) check[a[i][j]-1] = true;
            }
        }
        int cnt = 0;
        rep(i, 0, N) if(check[i]) cnt++;
        if(cnt == N) ans++;
    }
    cout << ans << endl;
}