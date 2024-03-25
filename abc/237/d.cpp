#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using veci = vector<int>;
using vecll = vector<ll>;
using vveci = vector<veci>;
using vvecll = vector<vecll>;
using Graph = vector<vector<int>>;
#define rep(i, l, r) for(int i=l; i<r; i++)
#define rrep(i, l, r) for(int i=r-1; i>=l; i--)

int main() {
    int N;
    string S;
    cin >> N >> S;
    deque<int> a = {N};

    rrep(i, 0, N) {
        if(S[i] == 'L') a.push_back(i);
        else a.push_front(i);
    }

    rep(i, 0, N+1) cout << a[i] << " ";
    cout << endl;
}