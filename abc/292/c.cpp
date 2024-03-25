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

map<ll, ll> prime_factorization(ll N) {
  map<ll, ll> res;
  for(ll i=2; i*i<=N; i++) {
    while(N%i == 0) {
      N /= i;
      res[i]++;
    }
  }
  if(N >= 2) res[N]++;
  return res;
}

int main() {
    ll N; cin >> N;
    vecll yakusuu(N);
    rep(i, 1, N) {
        map<ll, ll> m = prime_factorization(i);
        ll cnt = 1;
        for(auto j : m) cnt *= (j.second + 1);
        yakusuu[i] = cnt;
    }

    ll ans = 0;
    rep(i, 1, N) {
        ans += yakusuu[i] * yakusuu[N-i];
    }
    cout << ans << endl;
}