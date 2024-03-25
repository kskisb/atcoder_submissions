#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c; cin >> r >> c;
    vector<vector<int>> a(r, vector<int>(c));
    for(int i=0; i<r; i++) for(int j=0; j<c; j++) cin >> a[i][j];

    int ans = 0;
    for(int bit=0; bit<(1<<r); bit++) {
        vector<vector<int>> tmp = a;
        // とりあえずbit全探索に従って煎餅を裏返す
        for(int i=0; i<r; i++) {
            if(bit & (1<<i)) {
                for(int j=0; j<c; j++) {
                    if(tmp[i][j] == 1) tmp[i][j] = 0;
                    else tmp[i][j] = 1;
                }
            }
        }

        int cnt = 0;
        for(int i=0; i<c; i++) {
            int back = 0;
            for(int j=0; j<r; j++) {
                if(tmp[j][i] == 0) back++;
            }
            if(back >= r-back) cnt += back;
            else cnt += r-back;
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;
}