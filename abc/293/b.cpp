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
    veci A(N);
    vector<bool> called(N, false);
    rep(i, 0, N) cin >> A[i];
    rep(i, 0, N) {
        if(!called[i]) called[A[i]-1] = true;
    }

    veci ans;
    rep(i, 0, N) if(!called[i]) ans.push_back(i+1);
    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for(auto i : ans) cout << i << " ";
    cout << endl;
}