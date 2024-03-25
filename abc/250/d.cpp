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

vector<bool> Seive_of_Eratosthenes(ll N) {
    vector<bool> isprime(N+1, true);
    isprime[0] = false; isprime[1] = false;
    for(ll i=2; i*i<=N; i++) {
        if(!isprime[i]) continue;
        for(ll j=i*i; j<=N; j+=i) isprime[j] = false;
    }
    return isprime;
}

int main() {
    int Time = clock();
    ll N; cin >> N;

    vector<bool> isprime = Seive_of_Eratosthenes(1000001);
    vecll primecnt(1000002, 0);
    primecnt[2] = 1;
    rep(i, 3, primecnt.size()) {
        if(isprime[i]) primecnt[i] = primecnt[i-1] + 1;
        else primecnt[i] = primecnt[i-1];
    }

    ll ans = 0;
    for(ll q=2; q*q*q<=N; q++) {
        if(!isprime[q]) continue;
        ll p = N / (q*q*q);
        if(p >= q) ans += primecnt[q-1];
        else ans += primecnt[p];
    }

    cout << ans << endl;
}