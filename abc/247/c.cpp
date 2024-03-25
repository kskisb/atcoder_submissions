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

string rec(int N) {
    if(N == 1) return "1";
    else return rec(N-1) + " " + to_string(N) + " " + rec(N-1);
}

int main() {
    int N; cin >> N;
    cout << rec(N) << endl;
}