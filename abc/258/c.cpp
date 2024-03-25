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
    int N, Q; cin >> N >> Q;
    string S; cin >> S;
    vector<char> ans;
    int front = 0;
    rep(q, 0, Q) {
        int t, x; cin >> t >> x;
        if(t == 1) {
            front -= x;
            if(front < 0) front += N;
        } else {
            ans.push_back(S[(front+x-1)%N]);
        }
    }
    for(auto i : ans) cout << i << endl;
}