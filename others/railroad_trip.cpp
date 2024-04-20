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

int main() {
    int N, M; cin >> N >> M;
    vector<ll> P(M), A(N+1), B(N+1), C(N+1);
    for(int i=0; i<M; i++) cin >> P[i];
    for(int i=1; i<N; i++) cin >> A[i] >> B[i] >> C[i];

    vector<ll> left(100001, 0), right(100001, 0);
    vector<ll> railroads(100001, 0);
    for(int i=0; i<M-1; i++) {
        int l = P[i], r = P[i+1];
        if(l > r) {
            int tmp = l;
            l = r;
            r = tmp;
        }
        left[l]++;
        right[r-1]++;
    }

    int tmp = 0;
    for(int i=0; i<=100000; i++) {
        tmp += left[i];
        railroads[i] = tmp;
        tmp -= right[i];
    }

    ll ans = 0;
    for(int i=1; i<N; i++) {
        ll tmp = min(railroads[i]*A[i], railroads[i]*B[i]+C[i]);
        ans += tmp;
    }
    cout << ans << endl;
}