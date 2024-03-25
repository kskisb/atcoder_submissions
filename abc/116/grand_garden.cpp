#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> h(n), h_tmp(n, 0);
    for(int i=0; i<n; i++) cin >> h[i];

    int l = 0, ans = 0, finish = 0, tmp_min = 101;
    while(finish != n) {
        if(h[0] == 0 && l == 0) {
            l++; continue;
        }
        finish = 0;
        int r = l;
        tmp_min = min(tmp_min, h[r] - h_tmp[r]);
        while(r < n-1) {
            tmp_min = min(tmp_min, h[r] - h_tmp[r]);
            if(h_tmp[r+1] == h[r+1] && h[r] > h[r+1]) break;
            r++;
        }
        tmp_min = min(tmp_min, h[r] - h_tmp[r]);
        for(int i=l; i<=r; i++) h_tmp[i] += tmp_min;
        while(h_tmp[l] == h[l]) l++;
        ans += tmp_min;
        for(int i=0; i<n; i++) if(h_tmp[i] == h[i]) finish++;
    }
    cout << ans << endl;
}