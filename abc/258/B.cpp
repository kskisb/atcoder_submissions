#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using veci = vector<int>;
using vecll = vector<ll>;
using vecd = vector<double>;
using vveci = vector<veci>;
using vvecll = vector<vecll>;
using vvecd = vector<vecd>;
#define rep(i, l, r) for(int i=l; i<r; i++)
#define rrep(i, l, r) for(int i=r-1; i>=l; i--)

vector<int> dx = {-1, 0, 1, -1, 1, -1, 0, 1};
vector<int> dy = {-1, -1, -1, 0, 0, 1, 1, 1};

int main() {
    int N; cin >> N;
    vector<string> S(N);
    rep(i, 0, N) cin >> S[i];

    string maxnum = "0";
    rep(i, 0, N) {
        rep(j, 0, N) {
            rep(k, 0, 8) {
                string tmp = "";
                tmp.push_back(S[i][j]);
                int x = i, y = j;
                rep(l, 0, N-1) {
                    x += dx[k]; y += dy[k];
                    if(x == N) x = 0;
                    if(x == -1) x = N-1;
                    if(y == N) y = 0;
                    if(y == -1) y = N-1;
                    tmp.push_back(S[x][y]);
                }
                if(maxnum < tmp) maxnum = tmp;
            }
        }
    }
    cout << maxnum << endl;
}