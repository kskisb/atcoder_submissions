#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

// うまくいかない解答 → 全探索をする
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> s(m), c(m), ans(n, 10);
    for(int i=0; i<m; i++) cin >> s[i] >> c[i];

    bool flag = true;
    for(int i=0; i<m; i++) {
        if((ans[s[i]-1] != 10 && ans[s[i]-1] != c[i]) || (s[i]==1 && c[i]==0)) {
            flag = false; break;
        } else ans[s[i]-1] = c[i];
    }

    int answer = 0, tmp = 1;
    if(flag) {
        for(int i=0; i<n; i++) {
            if(ans[i] == 10) ans[i] = 0;
            answer += ans[n-i-1]*tmp;
            tmp *= 10;
        }
        cout << answer << endl;
    } else {
        cout << -1 << endl;
    }
}