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
    int N; cin >> N;
    string S; cin >> S;
    vector<pair<int, int>> p(N);
    rep(i, 0, N) {
        int w; cin >> w;
        if(S[i] == '1') p[i] = make_pair(w, -1);
        else p[i] = make_pair(w, 0);
    }
    sort(p.begin(), p.end());
    veci adult(N+1, 0), child(N+1, 0);
    rep(i, 1, N+1) {
        if(p[i-1].second == -1) {
            adult[i] = adult[i-1] + 1;
            child[i] = child[i-1];
        } else {
            adult[i] = adult[i-1];
            child[i] = child[i-1] + 1;
        }
    }

    int A = adult[N], ans = 0;
    rep(i, 1, N+1) {
        int tmpA = A - adult[i];
        if(p[i-1].second == -1) tmpA++;
        ans = max(ans, tmpA+child[i]);
    }
    
    cout << ans << endl;
}