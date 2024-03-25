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
    int N; cin >> N;
    vecll a(N), b(N), left(N, 0), right(N, 0);
    rep(i, 0, N) cin >> a[i] >> b[i];

    ll mod = 998244353;
    left[0] = 1; right[0] = 1;
    rep(i, 1, N) {
        if(a[i] != a[i-1]) left[i] += left[i-1];
        if(a[i] != b[i-1]) left[i] += right[i-1];
        if(b[i] != a[i-1]) right[i] += left[i-1];
        if(b[i] != b[i-1]) right[i] += right[i-1];
        left[i] %= mod; right[i] %= mod;
    }

    cout << (left[N-1] + right[N-1]) % mod << endl;
}