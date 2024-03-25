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
    map<ll, ll> A;

    rep(q, 0, Q) {
        ll num, x, k = -1;
        cin >> num >> x;
        if(num == 1) {
            A[x]++;
        } else if(num == 2) {
            cin >> k;
            auto itr1 = A.lower_bound(x);
            while(itr1->first > x && itr1 != A.begin()) itr1--;
            while(k > itr1->second && itr1 != A.begin()) {
                k -= itr1->second;
                itr1--;
            }
            if(itr1 == A.begin() && k > itr1->second) {
                cout << -1 << endl;
            } else {
                cout << itr1->first << endl;
            }
        } else {
            cin >> k;
            auto itr1 = A.lower_bound(x);
            while(k > itr1->second && itr1 != A.end()) {
                k -= itr1->second;
                itr1++;
            }
            if(itr1 == A.end()) {
                cout << -1 << endl;
            } else {
                cout << itr1->first << endl;
            }
        }
    }
}