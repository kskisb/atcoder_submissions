#include <iostream>
#include <map>
#include <set>
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
    int n; cin >> n;
    vector<pair<int, int>> stones;
    int now = 0;
    int s; cin >> s;
    stones.push_back({s, 1});
    for(int i=2; i<=n; i++) {
        cin >> s;
        if(i%2 == 1) {
            if(stones[now].first == s) stones[now].second++;
            else {
                stones.push_back({s, 1});
                now++;
            }
        } else {
            if(stones[now].first == s) stones[now].second++;
            else {
                stones[now].first = s;
                stones[now].second++;
                while(now>= 1 && stones[now-1].first == s) {
                    stones[now-1].second += stones[now].second;
                    stones.pop_back();
                    now--;
                }
            }
        }
    }

    int ans = 0;
    for(int i=0; i<stones.size(); i++) {
        if(stones[i].first == 0) ans += stones[i].second;
    }
    cout << ans << endl;
}