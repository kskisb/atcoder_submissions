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
    int N; cin >> N;
    vecd X(5*N);
    rep(i, 0, 5*N) cin >> X[i];
    double sum = 0;
    sort(X.begin(), X.end());
    rep(i, N, 4*N) {
        sum += X[i];
    }
    double ans = sum / (3*N);
    printf("%.8lf\n", ans);
}