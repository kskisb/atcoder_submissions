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

vector<vector<ll>> prefix_sum_2D(int M, int N, vector<string> f, char S) {
    vector<vector<ll>> res(M+1, vector<ll>(N+1, 0));
    for(int i=1; i<=M; i++) {
        for(int j=1; j<=N; j++) {
            res[i][j] = res[i-1][j] + res[i][j-1] - res[i-1][j-1];
            if(f[i][j] == S) res[i][j]++;
        }
    }
    return res;
}

int main() {
    int M, N, K;
    cin >> M >> N >> K;
    vector<string> field(M+1);
    for(int i=1; i<M+1; i++) {
        cin >> field[i];
        field[i] = " " + field[i];
    }
    vector<vector<ll>> p_sum_2D_J = prefix_sum_2D(M, N, field, 'J');
    vector<vector<ll>> p_sum_2D_O = prefix_sum_2D(M, N, field, 'O');
    vector<vector<ll>> p_sum_2D_I = prefix_sum_2D(M, N, field, 'I');

    vector<vector<ll>> ans(K, vector<ll>(3));
    for(int k=0; k<K; k++) {
        int a, b, c, d; cin >> a >> b >> c >> d;
        ans[k][0] = p_sum_2D_J[c][d] - p_sum_2D_J[c][b-1] - p_sum_2D_J[a-1][d] + p_sum_2D_J[a-1][b-1];
        ans[k][1] = p_sum_2D_O[c][d] - p_sum_2D_O[c][b-1] - p_sum_2D_O[a-1][d] + p_sum_2D_O[a-1][b-1];
        ans[k][2] = p_sum_2D_I[c][d] - p_sum_2D_I[c][b-1] - p_sum_2D_I[a-1][d] + p_sum_2D_I[a-1][b-1];
    }

    for(int i=0; i<K; i++) {
        cout << ans[i][0] << " " << ans[i][1] << " " << ans[i][2] << endl;
    }
}