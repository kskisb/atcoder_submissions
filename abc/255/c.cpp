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
    ll X, A, D, N; cin >> X >> A >> D >> N;
    if(D < 0) {
        A = A + D * (N-1);
        D *= -1;
    }
    ll left = A, right = A + (N-1) * D;
    if(X < left || D == 0) cout << abs(left - X) << endl;
    else if(right < X) cout << abs(right - X) << endl;
    else cout << min((X-A)%D, D-(X-A)%D) << endl;
}