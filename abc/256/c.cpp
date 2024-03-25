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
    veci h(3), w(3);
    rep(i, 0, 3) cin >> h[i];
    rep(i, 0, 3) cin >> w[i];
    ll cnt = 0;
    rep(i, 1, 29) {
        rep(j, 1, 29) {
            rep(k, 1, 29) {
                rep(l, 1, 29) {
                    int a13 = h[0] - i - j, a23 = h[1] - k - l;
                    int a31 = w[0] - i - k, a32 = w[1] - j - l;
                    if(a13 > 0 && a23 > 0 && a31 > 0 && a32 > 0) {
                        int a33h = h[2] - a31 - a32, a33w = w[2] - a13 - a23;
                        if(a33h > 0 && a33w > 0 && a33h == a33w) cnt++;
                    }
                }
            }
        }
    }
    cout << cnt << endl;
}