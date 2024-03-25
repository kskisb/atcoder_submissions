#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
#include <set>
using namespace std;
using ll=long long;

int N, M, ans = 0;
vector<int> k, p;
vector<vector<int>> s;

void check(vector<int> &switches) {
    int light = 0;
    for(int i=0; i<M; i++) {
        int s_cnt = 0;
        for(int j=0; j<k[i]; j++) if(switches[s[i][j]-1]) s_cnt++;
        if(s_cnt % 2 == p[i]) light++;
    }
    if(light == M) ans++;
}

void rec(vector<int> &switches) {
    if(switches.size() == N) {
        check(switches);
        return;
    }

    for(int i=0; i<2; i++) {
        switches.push_back(i);
        rec(switches);
        switches.pop_back();
    }
}

int main() {
    cin >> N >> M;
    s.resize(M);
    k.resize(M);
    p.resize(M);
    for(int i=0; i<M; i++) {
        cin >> k[i];
        s[i].resize(k[i]);
        for(int j=0; j<k[i]; j++) cin >> s[i][j];
    }
    for(int i=0; i<M; i++) cin >> p[i];

    vector<int> switches;
    rec(switches);
    cout << ans << endl;
}