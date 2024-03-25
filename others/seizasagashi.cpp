#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int m; cin >> m;
    vector<int> x(m), y(m);
    for(int i=0; i<m; i++) cin >> x[i] >> y[i];
    int n; cin >> n;
    vector<int> sora_x(n), sora_y(n);
    set<ll> S;
    for(int i=0; i<n; i++) {
        cin >> sora_x[i] >> sora_y[i];
        S.insert(sora_x[i]*sora_y[i]+sora_x[i]);
    }

    vector<int> candidates_x(n*m), candidates_y(n*m);
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            candidates_x[i*j+j] = sora_x[j] - x[i];
            candidates_y[i*j+j] = sora_y[j] - y[i];
        }
    }

    for(int i=0; i<m*n; i++) {
        int cnt = 0;
        for(int j=0; j<m; j++) {
            if(S.count((x[j]+candidates_x[i])*(y[j]+candidates_y[i])+(x[j]+candidates_x[i]))) cnt++;
        }
        if(cnt == m) {
            cout << candidates_x[i] << " " << candidates_y[i] << endl;
            break;
        }
    }
}