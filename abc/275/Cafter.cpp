#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using veci = vector<int>;
using vecll = vector<ll>;
using vecd = vector<double>;
using vveci = vector<veci>;
using vvveci = vector<vveci>;
using vvecll = vector<vecll>;
using vvvecll = vector<vvecll>;
using vvecd = vector<vecd>;
using Graph = vector<vector<int>>;
#define rep(i, l, r) for(int i=l; i<r; i++)
#define rrep(i, l, r) for(int i=r-1; i>=l; i--)

int main() {
    vector<string> S(9);
    rep(i, 0, 9) cin >> S[i];
    veci pawn;
    rep(i, 0, 9) rep(j, 0, 9) if(S[i][j] == '#') pawn.push_back(i*9+j);

    ll ans = 0;
    rep(i, 0, pawn.size()) {
        rep(j, 0, pawn.size()) {
            int x1 = pawn[i]/9, y1 = pawn[i]%9, x2 = pawn[j]/9, y2 = pawn[j]%9;
            if(x1 < x2 && y1 <= y2) {
                int dx = x2 - x1, dy = y2 - y1;
                int x3 = x2 + dy, y3 = y2 - dx;
                int x4 = x1 + dy, y4 = y1 - dx;
                if(x3 >= 0 && x3 < 9 && y3 >= 0 && y3 < 9 && x4 >= 0 && x4 < 9 && y4 >= 0 && y4 < 9) {
                    if(S[x3][y3] == '#' && S[x4][y4] == '#') ans++;
                }
            }
        }
    }
    cout << ans << endl;
}