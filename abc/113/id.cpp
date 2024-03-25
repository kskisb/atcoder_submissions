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

string zero_fill(int i) {
    ostringstream sout;
    sout << setfill('0') << setw(6) << i;
    string S = sout.str();
    return S;
}

int main() {
    int N, M; cin >> N >> M;
    vector<vector<pair<int, int>>> id(N, vector<pair<int, int>>());
    rep(i, 0, M) {
        int p, y; cin >> p >> y;
        id[p-1].push_back(make_pair(y, i));
    }

    rep(i, 0, N) sort(id[i].begin(), id[i].end());

    vector<string> ans(M);
    rep(i, 0, N) {
        rep(j, 0, id[i].size()) {
            ans[id[i][j].second] = zero_fill(i+1) + zero_fill(j+1);
        }
    }

    rep(i, 0, M) cout << ans[i] << endl;
}