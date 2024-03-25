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
    int N, K; cin >> N >> K;
    veci ans(N, -1);

    map<int, veci> cards;
    rep(i, 0, N) {
        int p; cin >> p;
        auto itr = cards.lower_bound(p);
        if(itr != cards.end()) {
            cards[p] = move(itr->second);
            cards.erase(itr);
        }
        cards[p].push_back(p);

        if(cards[p].size() == K) {
            for(auto j : cards[p]) ans[j-1] = i+1;
            cards.erase(p);
        }
    }

    rep(i, 0, N) cout << ans[i] << endl;
}