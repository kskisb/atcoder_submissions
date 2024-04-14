#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <climits>
#include <queue>
#include <algorithm>
#include <math.h>
using namespace std;
using ll = long long;
ll INF = 1LL << 60;
ll mod = 1000000007;

vector<ll> prefix_sum(int N, vector<ll> A) {
    vector<ll> p_sum(N+1, 0);
    for(int i=1; i<N+1; i++) p_sum[i] = p_sum[i-1] + A[i];
    return p_sum;
}

int main() {
    int n, m; cin >> n >> m;
    vector<ll> s(n+1), a(m);
    s[1] = 0;
    for(int i=2; i<n+1; i++) cin >> s[i];
    for(int i=0; i<m; i++) cin >> a[i];

    vector<ll> p_sum = prefix_sum(n, s);

    ll ans = 0;
    int now = 1;
    for(int i=0; i<m; i++) {
        ans += abs(p_sum[now+a[i]]-p_sum[now]);
        now = now+a[i];
    }

    cout << ans%100000 << endl;
}