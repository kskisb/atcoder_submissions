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
    ll n, x, y; cin >> n >> x >> y;
    vecll r(n+1, 0), b(n+1, 0);
    r[n] = 1, b[n] = 0;
    rrep(i, 2, n+1) {
        r[i-1] += r[i]; b[i] += x * r[i];
        r[i-1] += b[i]; b[i-1] += y * b[i];
    }
    cout << b[1] << endl;
}