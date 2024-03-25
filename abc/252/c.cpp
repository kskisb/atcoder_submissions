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
    vector<string> S(N);
    vector<char> num = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    rep(i, 0, N) cin >> S[i];

    int ans = 1e8;
    rep(i, 0, 10) {
        map<int, int> m;
        rep(j, 0, N) {
            rep(k, 0, 10) {
                if(S[j][k] == num[i]) m[k]++;
            }
        }
        int tmp = 0;
        for(auto i : m) tmp = max(tmp, (i.second-1)*10+i.first);
        ans = min(ans, tmp);
    }
    cout << ans << endl;
}