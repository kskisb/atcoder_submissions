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
#define rep(i, l, r) for(int i=l; i<r; i++)
#define rrep(i, l, r) for(int i=r-1; i>=l; i--)
using ll = long long;

int main() {
    int x, y, z, K; cin >> x >> y >> z >> K;
    vector<ll> a(x), b(y), c(z);
    rep(i, 0, x) cin >> a[i];
    rep(i, 0, y) cin >> b[i];
    rep(i, 0, z) cin >> c[i];
    sort(a.begin(), a.end(), greater<ll>());
    sort(b.begin(), b.end(), greater<ll>());
    sort(c.begin(), c.end(), greater<ll>());
    priority_queue<ll> que;
    
    
    rep(i, 0, K) {
        cout << que.top() << endl;
        que.pop();
    }
}