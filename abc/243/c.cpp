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
    int N; cin >> N;
    veci X(N), Y(N);
    rep(i, 0, N) cin >> X[i] >> Y[i];
    string S; cin >> S;

    map<int, pair<int, bool>> mleft;
    map<int, pair<int, bool>> mright;

    rep(i, 0, N) {
        if(S[i] == 'R') {
            if(mright[Y[i]].second) {
                mright[Y[i]] = make_pair(min(mright[Y[i]].first, X[i]), true);
            } else {
                mright[Y[i]] = make_pair(X[i], true);
            }
        } else {
            if(mleft[Y[i]].second) {
                mleft[Y[i]] = make_pair(max(mleft[Y[i]].first, X[i]), true);
            } else {
                mleft[Y[i]] = make_pair(X[i], true);
            }
        }
    }

    for(auto i : mleft) {
        if(i.second.second && mright[i.first].second) {
            if(i.second.first > mright[i.first].first) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}