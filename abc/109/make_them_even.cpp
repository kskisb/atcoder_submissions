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

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<int>> a(H);
    for(int i=0; i<H; i++) {
        for(int j=0; j<W; j++) {
            int t;
            cin >> t;
            a[i].push_back(t);
        }
    }

    int ans = 0;
    vector<int> y, x, y_d, x_d;
    for(int i=0; i<H; i++) {
        for(int j=0; j<W; j++) {
            if(i == H-1 && j == W-1) {
                if(a[i][j]%2 == 0) ans = H*W;
                else ans = H*W - 1;
                continue;
            }
            if(j == W-1 && a[i][j]%2 != 0) {
                a[i][j]--; a[i+1][j]++;
                y.push_back(i+1); x.push_back(j+1);
                y_d.push_back(i+2); x_d.push_back(j+1);
            } else if(a[i][j]%2 != 0) {
                a[i][j]--; a[i][j+1]++;
                y.push_back(i+1); x.push_back(j+1);
                y_d.push_back(i+1); x_d.push_back(j+2);   
            }
        }
    }

    cout << y.size() << endl;
    for(int i=0; i<y.size(); i++) cout << y[i] << " " << x[i] << " " << y_d[i] << " " << x_d[i] << endl;
}