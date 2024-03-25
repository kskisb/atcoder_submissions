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
    int N, Q; cin >> N >> Q;

    set<int> not_called, called;
    rep(i, 0, N) not_called.insert(i);

    veci ans;
    rep(q, 0, Q) {
        int num, x = -1;
        cin >> num;
        if(num == 1) {
            auto not_called_first = not_called.begin();
            not_called.erase(not_called_first);
            called.insert(*not_called_first);
        } else if(num == 2) {
            cin >> x; x--;
            if(called.find(x) != called.end()) called.erase(x);
        } else {
            auto not_checked_first = called.begin();
            ans.push_back(*not_checked_first);
        }
    }
    
    for(auto i : ans) cout << i+1 << endl;
}