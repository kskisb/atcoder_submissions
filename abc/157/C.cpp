#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> s(m), c(m);
    for(int i=0; i<m; i++) cin >> s[i] >> c[i];

    int answer = 1000;
    for(int i=pow(10, n-1); i<1000; i++) {
        bool flag = true;
        for(int j=0; j<m; j++) {
            int pow1 = pow(10, n-s[j]+1), pow2 = pow1/10;
            if((i%pow1)/pow2 != c[j] || (n!=1 && s[j]==1 && c[j]==0)) flag = false;
        }
        if(flag) answer = min(answer, i);
    }

    if(m == 0) cout << 0 << endl;
    else if(answer != 1000) cout << answer << endl;
    else cout << -1 << endl;
}