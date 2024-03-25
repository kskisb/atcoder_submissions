#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using veci = vector<int>;
using vecll = vector<ll>;
using vecd = vector<double>;
using vveci = vector<veci>;
using vvecll = vector<vecll>;
using vvecd = vector<vecd>;
using Graph = vector<vector<int>>;
#define rep(i, l, r) for(int i=l; i<r; i++)
#define rrep(i, l, r) for(int i=r-1; i>=l; i--)

vector<string> S;

bool checkrow(int sx, int sy) {
    int cnt = 0;
    rep(i, 0, 6) if(S[sx+i][sy] == '#') cnt++;
    if(cnt >= 4) return true;
    else return false;
}

bool checkcolumn(int sx, int sy) {
    int cnt = 0;
    rep(i, 0, 6) if(S[sx][sy+i] == '#') cnt++;
    if(cnt >= 4) return true;
    else return false;
}

bool checkLowerRight(int sx, int sy) {
    int cnt = 0;
    rep(i, 0, 6) if(S[sx+i][sy+i] == '#') cnt++;
    if(cnt >= 4) return true;
    else return false;
}

bool checkLowerLeft(int sx, int sy) {
    int cnt = 0;
    rep(i, 0, 6) if(S[sx+i][sy-i] == '#') cnt++;
    if(cnt >= 4) return true;
    else return false;
}

int main() {
    int N; cin >> N;
    S.resize(N);
    rep(i, 0, N) cin >> S[i];

    rep(i, 0, N) {
        rep(j, 0, N) {
            if(i <= N-6) {
                if(checkrow(i, j)) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            if(j <= N-6) {
                if(checkcolumn(i, j)) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            if(i <= N-6 && j <= N-6) {
                if(checkLowerRight(i, j)) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            if(i <= N-6 && j >= 5) {
                if(checkLowerLeft(i, j)) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;
}