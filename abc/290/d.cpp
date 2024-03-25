#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using veci = vector<int>;
using vecll = vector<ll>;
using vecd = vector<double>;
using vveci = vector<veci>;
using vvecll = vector<vecll>;
using vvecd = vector<vecd>;
#define rep(i, l, r) for(int i=l; i<r; i++)
#define rrep(i, l, r) for(int i=r-1; i>=l; i--)

int main() {
    int T; cin >> T;

    vecll ans(T);
    rep(i, 0, T) {
        ll N, D, K; cin >> N >> D >> K;
        if(N%D == 0) {
            if(D*(K-1) >= N) ans[i] = D*(K-1) % N + 1;
            else ans[i] = D*(K-1) % N;
        } else if(D%N == 0) {
            if(D*(K-1) >= N) ans[i] = D*(K-1) % N + K;
            else ans[i] = D*(K-1) % N;
        } else ans[i] = D*(K-1) % N;
    }

    rep(i, 0, T) cout << ans[i] << endl;
}