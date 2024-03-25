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
    int N, M; cin >> N >> M;
    priority_queue<int> que;
    rep(i, 0, N) {
        int a; cin >> a; que.push(a);
    }
    que.push(0);

    while(M > 0) {
        int now_max = que.top(); que.pop();
        int second_max = que.top();
        while(now_max >= second_max && M > 0) {
            now_max /= 2; M--;
        }
        que.push(now_max);
    }
    
    ll ans = 0;
    rep(i, 0, N) {
        ans += que.top();
        que.pop();
    }
    cout << ans << endl;
}