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
    int T; cin >> T;
    vector<string> ans(T, "No");

    rep(i, 0, T) {
        ll a, s; cin >> a >> s;
        if(2*a <= s) {
            ll diff = s - 2*a;
            if((diff&a) == 0) ans[i] = "Yes";
        }
    }

    rep(i, 0, T) cout << ans[i] << endl;
}