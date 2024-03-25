#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int rewrite(string s, string t, int i) {
    int cnt = 0, k=0;
    for(int r=0; r<t.size(); r++) {
        if(s[i] != t[k]) cnt++;
        i++; k++;
    }
    return cnt;
}

int main() {
    string s, t;
    cin >> s >> t;

    int ans = 10000;
    for(int i=0; i<=s.size() - t.size(); i++) {
        ans = min(ans, rewrite(s, t, i));
    }
    cout << ans << endl;
}