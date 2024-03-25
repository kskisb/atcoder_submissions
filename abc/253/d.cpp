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

ll N;

ll SumofSequence(ll x) {
    return (N/x) * (x + (N/x)*x) / 2;
}

int main() {
    ll A, B; cin >> N >> A >> B;
    ll AB = A / __gcd(A, B) * B;
    cout << SumofSequence(1) - SumofSequence(A) - SumofSequence(B) + SumofSequence(AB) << endl;
}