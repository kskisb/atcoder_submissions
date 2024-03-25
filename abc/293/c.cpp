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

vector<vector<pair<int, int>>> G;
vector<int> visited;
int cnt = 0;
int H, W;

void rec(int s) {
    if(visited.size() == H+W-1) {
        for(auto i : visited) cout << i << " ";
        cout << endl;
        bool flag = true;
        map<int, bool> m;
        for(auto i : visited) {
            if(m[i] == true) flag = false;
            m[i] = true;
        }
        if(flag) cnt++;
        return;
    }

    for(auto v : G[s]) {
        visited.push_back(v.second);
        rec(v.first);
        visited.pop_back();
    }

}

int main() {
    cin >> H >> W;
    G.assign(H*W, vector<pair<int, int>>());
    vveci A(H, veci(W));
    rep(i, 0, H) rep(j, 0, W) cin >> A[i][j];
    rep(i, 0, H) {
        rep(j, 0, W) {
            if(i != H-1) {
                G[i*W+j].push_back(make_pair((i+1)*W+j, A[i+1][j]));
            }
            if(j != W-1) {
                G[i*W+j].push_back(make_pair(i*W+j+1, A[i][j+1]));
            }
        }
    }

    visited.push_back(A[0][0]);
    rec(0);
    cout << cnt << endl;
}