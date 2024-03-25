#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
#include <set>
#include <queue>
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
    int H, W; cin >> H >> W;
    vector<string> A(H);
    veci row(H), column(W);
    rep(i, 0, H) cin >> A[i];
    rep(i, 0, H) row[i] = i;
    rep(i, 0, W) column[i] = i;

    int Q; cin >> Q;
    rep(q, 0, Q) {
        int a, b; cin >> a >> b;
        rep(i, 0, a) row[i] = a-1-i;
        rep(i, a, H) row[i] = H-1+a-i;
        rep(i, 0, b) column[i] = b-1-i;
        rep(i, b, W) column[i] = W-1+b-i;
    }

    vector<vector<char>> ans(H, vector<char>(W));
    rep(i, 0, W) rep(j, 0, H) ans[j][i] = A[row[j]][column[i]];

    rep(i, 0, H) {
        rep(j, 0, W) cout << ans[i][j];
        cout << endl;
    }
}