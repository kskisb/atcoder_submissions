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
    int n, a, b, c, d; cin >> n >> a >> b >> c >> d;
    if(b == 0 && c == 0 && a != 0 && d != 0) cout << "No" << endl;
    else if(abs(b-c) <= 1) cout << "Yes" << endl;
    else cout << "No" << endl;
}