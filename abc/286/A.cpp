#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
#include <set>
#include <queue>
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

int main() {
    int N, P, Q, R, S; cin >> N >> P >> Q >> R >> S;
    veci A(N);
    rep(i, 0, N) cin >> A[i];
    rep(i, 0, P-1) cout << A[i] << " ";
    rep(i, R-1, S) cout << A[i] << " ";
    rep(i, Q, R-1) cout << A[i] << " ";
    rep(i, P-1, Q) cout << A[i] << " ";
    rep(i, S, N) cout << A[i] << " ";
    cout << endl;
}