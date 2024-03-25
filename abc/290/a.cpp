#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using veci = vector<int>;
using vecll = vector<ll>;
using vecd = vector<double>;
using vveci = vector<veci>;
using vvecll = vector<vecll>;
using vvecd = vector<vecd>;
#define rep(i, l, r) for(int i=l; i<r; i++)
#define rrep(i, l, r) for(int i=r-1; i>=l; i--)

int main() {
    int N, M; cin >> N >> M;
    veci A(N), B(M);
    rep(i, 0, N) cin >> A[i];
    rep(i, 0, M) cin >> B[i];
    int ans = 0;
    rep(i, 0, M) ans += A[B[i]-1];
    cout << ans << endl;
}