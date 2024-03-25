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
    veci A(N+M+1, 0), C(N+M+1), B(N+M+1, 0);
    rep(i, 0, N+1) cin >> A[i];
    rep(i, 0, N+M+1) cin >> C[i];

    rrep(i, 0, M+1) {
        int tmp = C[i+N];
        rep(j, 0, i+N+1) tmp -= A[j] * B[i+N-j];
        B[i] = tmp / A[N];
    }

    rep(i, 0, M+1) cout << B[i] << " ";
    cout << endl;
}