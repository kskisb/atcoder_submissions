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
using ll = long long;

int main() {
    int N, M; cin >> N >> M;
    vector<vector<int>> AB(M+1);
    for(int i=0; i<N; i++) {
        int a, b; cin >> a >> b;
        if(a > M) continue;
        AB[a].push_back(b);
    }
    
    priority_queue<ll> que;
    ll ans = 0;
    for(int i=1; i<=M; i++) {
        for(int j=0; j<AB[i].size(); j++) que.push(AB[i][j]);
        if(!que.empty()) {
            ans += que.top();
            que.pop();
        }
    }
    cout << ans << endl;
}