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

int H, W, K;
int ans = 0;
vector<vector<char>> c;
vector<int> rc;

bool check(vector<int> &rc) {
    int cnt = 0;
    for(int h=1; h<H+1; h++) {
        if(rc[h]) continue;
        for(int w=1; w<W+1; w++) {
            if(rc[H+w]) continue;
            if(c[h][w] == '#') cnt++;
        }
    }
    if(cnt == K) return true;
    else return false;
}

void rec(vector<int> &rc) {
    if(rc.size() == H+W+1) {
        for(int i=1; i<H+W+1; i++) cout << rc[i] << " ";
        cout << endl;
        if(check(rc)) ans++;
        return;
    }

    for(int i=0; i<2; i++) {
        rc.push_back(i);
        rec(rc);
        rc.pop_back();
    }

    return;
}

int main() {
    cin >> H >> W >> K;
    c.resize(H+1);
    for(int i=1; i<H+1; i++) {
        c[i].resize(W+1);
        for(int j=1; j<W+1; j++) {
            char ch; cin >> ch;
            c[i][j] = ch;
        }
    }

    rec(rc);
    cout << ans/2 << endl;
}