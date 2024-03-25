#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using veci = vector<int>;
using vecll = vector<ll>;
using vveci = vector<veci>;
using vvecll = vector<vecll>;
using Graph = vector<vector<int>>;
#define rep(i, l, r) for(int i=l; i<r; i++)
#define rrep(i, l, r) for(int i=r-1; i>=l; i--)

int main() {
    unsigned long long N, mod = 998244353; cin >> N;
    string S = to_string(N);
    unsigned long long ans = ((N%mod) * ((N+1)%mod) / 2);
    unsigned long long tenpow = 10;
    rep(i, 1, S.size()) {
        if(N >= tenpow) ans -= (((tenpow - tenpow/10)%mod)*((N - tenpow + 1)%mod))%mod;
        tenpow *= 10;
    }
    cout << ans%mod << endl;
}