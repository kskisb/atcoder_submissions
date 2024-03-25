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

int main() {
    int N, M; cin >> N >> M;
    veci a(M), p(N);
    rep(i, 0, M) cin >> a[i];
    rep(i, 0, N) p[i] = i+1;
    rep(i, 0, M) {
        int j = i;
        while(a[j+1] - a[j] == 1) j++;
        int mid = (a[j]+a[i])/2;
        rep(k, a[i]-1, mid) {
            swap(p[k], p[a[j]-k+a[i]-1]);
        }
        i = j;
    }

    rep(i, 0, N) cout << p[i] << " ";
    cout << endl;
}