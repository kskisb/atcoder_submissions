#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <queue>
#include <algorithm>
using namespace std;
using ll = long long;
ll INF = 1LL << 60;

vector<vector<ll>> c(10, vector<ll>(10));
vector<vector<ll>> wall;
int H, W;

void warshall_floyd() {
    for (int k=0; k<10; k++) {
        for (int i=0; i<10; i++) {
            for (int j=0; j<10; j++) {
                if((c[i][k] < INF) && (c[k][j] < INF)) {
                    c[i][j] = min(c[i][j], c[i][k] + c[k][j]);
                }
            }
        }
    }
}

int main() {
    cin >> H >> W;
    wall.assign(H, vector<ll>(W));

    for(int i=0; i<10; i++) for(int j=0; j<10; j++) cin >> c[i][j];
    for(int i=0; i<H; i++) for(int j=0; j<W; j++) cin >> wall[i][j];

    warshall_floyd();

    ll ans = 0;
    for(int i=0; i<H; i++) {
        for(int j=0; j<W; j++) {
            if(wall[i][j] == -1) continue;
            ans += c[wall[i][j]][1];
        }
    }
    cout << ans << endl;
}