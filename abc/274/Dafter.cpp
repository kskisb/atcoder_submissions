#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using veci = vector<int>;
using vecll = vector<ll>;
using vecd = vector<double>;
using vveci = vector<veci>;
using vvveci = vector<vveci>;
using vvecll = vector<vecll>;
using vvvecll = vector<vvecll>;
using vvecd = vector<vecd>;
using Graph = vector<vector<int>>;
#define rep(i, l, r) for(int i=l; i<r; i++)
#define rrep(i, l, r) for(int i=r-1; i>=l; i--)

int main() {
    int N, x, y; cin >> N >> x >> y;
    veci Ax, Ay;
    int d = 10000;
    int tmp; cin >> tmp;
    x -= tmp; x += d;
    y += d;
    rep(i, 0, N-1) {
        int a; cin >> a;
        if(i%2) Ax.push_back(a);
        else Ay.push_back(a);
    }

    vector<vector<bool>> dpx(Ax.size()+1, vector<bool>(20001, false));
    vector<vector<bool>> dpy(Ay.size()+1, vector<bool>(20001, false));
    dpx[0][10000] = true; dpy[0][10000] = true;
    rep(i, 0, Ax.size()) {
        rep(j, 0, 20001) {
            if(dpx[i][j]) {
                dpx[i+1][j+Ax[i]] = true;
                dpx[i+1][j-Ax[i]] = true;
            }
        }
    }
    rep(i, 0, Ay.size()) {
        rep(j, 0, 20001) {
            if(dpy[i][j]) {
                dpy[i+1][j+Ay[i]] = true;
                dpy[i+1][j-Ay[i]] = true;
            }
        }
    }

    if(dpx[Ax.size()][x] && dpy[Ay.size()][y]) cout << "Yes" << endl;
    else cout << "No" << endl;
}