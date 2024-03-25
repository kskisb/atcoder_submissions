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
#define rep(i, l, r) for(ll i=l; i<r; i++)
#define rrep(i, l, r) for(ll i=r-1; i>=l; i--)

int main() {
    int N; cin >> N;
    veci A(N);
    map<int, ll> m;
    rep(i, 0, N) {
        cin >> A[i];
        m[A[i]]++;
    }

    ll cnt = 0;
    rep(i, 0, N) {
        int now = A[i];
        for(int i=1; i*i<=now; i++) {
            if(now%i != 0) continue;
            cnt += m[i] * m[now/i];
            if(now/i != i) cnt += m[i] * m[now/i];
        }
    }

    cout << cnt << endl;
}