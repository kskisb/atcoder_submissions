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

int N, ans = 0;
vveci A;
vector<pair<int, int>> p;
vector<bool> paired;

void rec() {
    if(p.size() == N) {
        int tmp = 0;
        for(auto i : p) tmp ^= a[i.first][i.second];
        ans = max(ans, tmp);
        return;
    }

    int now;
    rep(i, 0, 2*N) {
        if(!paird[i]) {
            now = i;
            break;
        }
    }
    paired[now] = true;

    int tmp = 0;
    rep(i, 0, 2*N) {
        if(!paired[i]) {
            p.push_back({now, i}); paired[i] = true;
            
        }
    }
}

int main() {
    cin >> N;
    A.assign(2*N, veci(2*N));
    paired.assign(2*N, false);
    rep(i, 0, 2*N) rep(j, i+1, 2*N) cin >> A[i][j];

    rec();
    cout << ans << endl;
}