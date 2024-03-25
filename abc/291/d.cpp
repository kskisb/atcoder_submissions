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
    vecll a(N), b(N);
    rep(i, 0, N) cin >> a[i] >> b[i];
    rep(i, 0, N) if(a[i] > b[i]) swap(a[i], b[i]);

    veci tmp1, tmp2;
    tmp1.push_back(a[0]); tmp2.push_back(b[0]);
    rep(i, 1, N) {
        if(a[i] == b[i] && a[i-1] == b[i-1] && a[i] == a[i-1]) {
            cout << 0 << endl;
            return 0;
        }
        int size = tmp1.size();
        if(a[i] == tmp1[size-1] && b[i] == tmp2[size-1]) continue;
        tmp1.push_back(a[i]); tmp2.push_back(b[i]);
    }

    int n = tmp1.size();
    vecll left(n, 0), right(n, 0);
    left[0] = 1; right[0] = 1;
    ll mod = 998244353;
    rep(i, 1, n) {
        if(tmp1[i] != tmp1[i-1]) left[i] += left[i-1];
        if(tmp1[i] != tmp2[i-1]) left[i] += right[i-1];
        if(tmp2[i] != tmp1[i-1]) right[i] += left[i-1];
        if(tmp2[i] != tmp2[i-1]) right[i] += right[i-1];
        //left[i] %= mod; right[i] %= mod;
    }
    cout << (right[n-1] + left[n-1])%mod << endl;
}