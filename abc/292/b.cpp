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
    int N, Q; cin >> N >> Q;
    veci cards(N, 0);
    vector<string> S;
    rep(q, 0, Q) {
        int num, x; cin >> num >> x;
        if(num == 1) {
            cards[x-1]++;
        } else if(num == 2) {
            cards[x-1] += 2;
        } else {
            if(cards[x-1] >= 2) S.push_back("Yes");
            else S.push_back("No");
        }
    }
    for(auto i : S) cout << i << endl;
}