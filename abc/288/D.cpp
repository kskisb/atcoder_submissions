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
    vector<string> S(N);
    vector<string> ans;
    rep(i, 0, N) cin >> S[i];
    rep(i, 0, K) ans.push_back(S[i]);
    sort(ans.begin(), ans.end());
    for(auto i : ans) cout << i << endl;
}