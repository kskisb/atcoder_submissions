#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
#include <set>
#include <queue>
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
    ll N, A, B;
    string S;
    cin >> N >> A >> B >> S;
    ll ans = LLONG_MAX;

    rep(i, 0, N) {
        S = S.substr(1, N-1) + S[0];
        ll cnt = 0;
        rep(j, 0, N/2) if(S[j] != S[N-j-1]) cnt++;
        if(i == N-1) ans = min(ans, cnt*B);
        else ans = min(ans, (i+1)*A + cnt*B);
        
    }
    cout << ans << endl;
}