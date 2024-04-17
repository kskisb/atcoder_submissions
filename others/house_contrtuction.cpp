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
    ll H, W, K, V; cin >> H >> W >> K >> V;
    vector<vector<ll>> A(H+1, vector<ll>(W+1));
    for(int i=1; i<H+1; i++) for(int j=1; j<W+1; j++) cin >> A[i][j];
    vector<vector<ll>> p_sum = prefix_sum_2D(A);

    ll max_area = 0;
    for(ll i=1; i<H+1; i++) {
        for(ll j=1; j<W+1; j++) {
            for(ll k=1; k<H+1; k++) {
                for(ll l=1; l<W+1; l++) {
                    if(k>i || l>j) continue;
                    ll value = p_sum[i][j] - p_sum[i][l-1] - p_sum[k-1][j] + p_sum[k-1][l-1] + (i-k+1)*(j-l+1)*K;
                    if(value <= V) {
                        max_area = max(max_area, (i-k+1)*(j-l+1));
                    }
                }
            }
        }
    }
    cout << max_area << endl;
}