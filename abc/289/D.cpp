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
    veci A(N);
    rep(i, 0, N) cin >> A[i];
    int M; cin >> M;
    vector<bool> B(100001, true);
    rep(i, 0, M) {
        int b; cin >> b;
        B[b] = false;
    }
    int X; cin >> X;

    vector<bool> dp(1000001, false);
    dp[0] = true;
    rep(i, 0, X+1) {
        if(!B[i] || !dp[i]) continue;
        rep(j, 0, N) {
            int floor = i + A[j];
            if(B[floor]) dp[floor] = true;
        }
    }

    if(dp[X]) cout << "Yes" << endl;
    else cout << "No" << endl;
}