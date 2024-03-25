#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int check(string x, string y) {
    int cnt = 0;
    sort(x.begin(), x.end());
    for(int i=0; i<x.size(); i++) {
        char tmp = x[i];
        if(i>0 && tmp == x[i-1]) continue;
        for(int j=0; j<y.size(); j++) {
            if(tmp == y[j]) {
                cnt++; break;
            }
        }
    }
    return cnt;
}

int main() {
    int n;
    string s, x, y;
    cin >> n >> s;

    int ans = -1;
    for(int i=1; i<s.size(); i++) {
        x = s.substr(0, i);
        y = s.substr(i);
        ans = max(check(x, y), ans);
    }
    
    cout << ans << endl;
}