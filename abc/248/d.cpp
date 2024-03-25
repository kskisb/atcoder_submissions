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
#define rep(i, l, r) for(ll i=l; i<r; i++)
#define rrep(i, l, r) for(ll i=r-1; i>=l; i--)

int main() {
    int N; cin >> N;
    vveci cnt(N+1, veci());
    rep(i, 0, N) {
        int a; cin >> a;
        cnt[a].push_back(i+1);
    }
    int Q; cin >> Q;
    vector<int> ans(Q);
    rep(q, 0, Q) {
        int L, R, X; cin >> L >> R >> X;
        if(cnt[X].size() == 0) {
            ans[q] = 0;
            continue;
        }
        int pos1 = lower_bound(cnt[X].begin(), cnt[X].end(), L) - cnt[X].begin();
        int pos2 = upper_bound(cnt[X].begin(), cnt[X].end(), R) - cnt[X].begin();
        ans[q] = pos2 - pos1;
    }

    for(auto a : ans) cout << a << endl;
}