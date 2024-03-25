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
    int N, M; cin >> N >> M;
    vector<string> S(N), T(M);
    rep(i, 0, N) cin >> S[i];
    rep(i, 0, M) cin >> T[i];

    int cnt = 0;
    rep(i, 0, N) {
        rep(j, 0, M) {
            if(S[i].substr(3) == T[j]) {
                cnt++;
                break;
            }
        }
    }
    cout << cnt << endl;
}