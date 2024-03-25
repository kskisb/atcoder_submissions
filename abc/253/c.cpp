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
    int Q; cin >> Q;
    map<int, int> S;
    veci ans;
    rep(q, 0, Q) {
        int num; cin >> num;
        if(num == 1) {
            int x; cin >> x;
            S[x]++;
        } else if(num == 2) {
            int x, c; cin >> x >> c;
            S[x] -= min(c, S[x]);
            if(S[x] == 0) S.erase(x);
        } else {
            auto itr1 = S.begin(), itr2 = S.end(); itr2--;
            ans.push_back(itr2->first - itr1->first);
        }
    }
    for(auto i : ans) cout << i << endl;
}