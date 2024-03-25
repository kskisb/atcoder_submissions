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
    veci A(N), B(N);
    vector<bool> a(N, false), b(N, false);

    rep(i, 0, N) cin >> A[i];
    rep(i, 0, N) cin >> B[i];

    a[0] = true; b[0] = true;
    rep(i, 1, N) {
        if(a[i-1] && (abs(A[i] - A[i-1]) <= K) || (b[i-1] && abs(A[i] - B[i-1]) <= K)) {
            a[i] = true;
        }
        if(a[i-1] && (abs(B[i] - A[i-1]) <= K) || (b[i-1] && abs(B[i] - B[i-1]) <= K)) {
            b[i] = true;
        }
        if(!a[i] && !b[i]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}