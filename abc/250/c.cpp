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
    int N, Q; cin >> N >> Q;
    int a[N+1], balls[N+1];
    rep(i, 0, N+1) {
        a[i] = i;
        balls[i] = i;
    }
    
    rep(q, 0, Q) {
        int x; cin >> x;
        int pos = balls[x];
        int next = pos+1;
        if(pos == N) next = N-1;
        int nextball = a[next];
        swap(a[pos], a[next]);
        balls[x] = next; balls[nextball] = pos;
    }
    rep(i, 1, N+1) cout << a[i] << " ";
    cout << endl;
}