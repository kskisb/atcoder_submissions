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

vector<vector<ll>> prefix_sum_2D(vector<vector<ll>> a) {
    int H = a.size(), W = a[0].size();
    vector<vector<ll>> res(H, vector<ll>(W, 0));
    for(int i=1; i<H; i++) {
        for(int j=1; j<W; j++) {
            res[i][j] = res[i-1][j] + res[i][j-1] - res[i-1][j-1] + a[i][j];
        }
    }
    return res;
}

int main() {
    int N, M, Q;
    cin >> N >> M >> Q;
    vector<vector<ll>> A(N+1, vector<ll>(N+1, 0)), p_sum;
    for(int i=0; i<M; i++) {
        ll l, r; cin >> l >> r;
        A[l][r]++;
    }

    p_sum = prefix_sum_2D(A);

    vector<ll> ans(Q);
    for(int i=0; i<Q; i++) {
        int p, q; cin >> p >> q;
        ans[i] = p_sum[q][q] - p_sum[q][p-1] - p_sum[p-1][q] + p_sum[p-1][p-1];
    }

    for(auto a : ans) cout << a << endl;
}