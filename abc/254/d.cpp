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
    int N; cin >> N;

    ll cnt = 0;
    for(ll i=1; i<=N; i++) {
        map<ll, ll> tmp = prime_factorization(i);
        ll sqnum = i;
        for(auto j : tmp) if(j.second % 2) sqnum *= j.first;
        for(ll j=1; j*j*sqnum<=i*N; j++) cnt++;
    }
    cout << cnt << endl;
}