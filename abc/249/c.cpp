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
    int N, K; cin >> N >> K;
    vector<string> S(N);
    rep(i, 0, N) cin >> S[i];

    int ans = 0;
    rep(bit1, 0, 1<<N) {
        vector<string> tmp;
        rep(i, 0, N) {
            if(bit1 / (1<<i) % 2 != 0) tmp.push_back(S[i]);
        }
        int M = tmp.size();
        if(M < K) continue;
        map<char, int> alphabets;
        rep(j, 0, tmp.size()) {
            rep(k, 0, tmp[j].size()) alphabets[tmp[j][k]]++;
        }
        int cnt = 0;
        for(auto j : alphabets) if(j.second == K) cnt++;
        ans = max(ans, cnt);
    }
    cout << ans << endl;
}