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
    int Q; cin >> Q;
    vecll ans;

    deque<pair<ll, ll>> que;
    rep(q, 0, Q) {
        int num; cin >> num;
        if(num == 1) {
            ll x, c; cin >> x >> c;
            que.push_back(make_pair(c, x));
        } else {
            ll c; cin >> c;
            ll tmp = 0;
            while(c != 0) {
                ll ball = min(c, que.front().first);
                tmp += ball * que.front().second;
                que.front().first -= ball;
                c -= ball;
                if(que.front().first == 0) que.pop_front();
            }
            ans.push_back(tmp);
        }
    }
    
    for(auto i : ans) cout << i << endl;
}