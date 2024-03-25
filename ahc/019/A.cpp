#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int Time = clock();
    int D; cin >> D;
    vector<vector<string>> f(2, vector<string>(D));
    vector<vector<string>> r(2, vector<string>(D));

    for(int i=0; i<2; i++) {
        for(int j=0; j<D; j++) cin >> f[i][j];
        for(int j=0; j<D; j++) cin >> r[i][j];
    }

    vector<vector<int>> b(2, vector<int>(D*D*D));
    int N = 0;

    bool flag = false;
    for(int i=0; i<2; i++) {
        for(int x=0; x<D; x++) {
            for(int y=0; y<D; y++) {
                for(int z=0; z<D; z++) {
                    if(f[i][z][x] == '1' && r[i][z][y] == '1') {
                        N++;
                        b[i][x*D*D + y*D + z] = N;
                    }
                    if(6.0 - 1.0*(clock()-Time)/CLOCKS_PER_SEC <= 0.01) {
                        flag = true;
                    }
                    if(flag) break;
                }
                if(flag) break;
            }
            if(flag) break;
        }
        if(flag) break;
    }

    cout << N << endl;
    for(auto i : b[0]) cout << i << " ";
    cout << endl;
    for(auto i : b[1]) cout << i << " ";
    cout << endl;
}