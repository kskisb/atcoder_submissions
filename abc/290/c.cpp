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

int main() {
    int N, K; cin >> N >> K;
    vector<bool> A(N+1, false);
    rep(i, 0, N) {
        int a; cin >> a;
        if(a > N+1) continue;
        A[a] = true;
    }

    int index = 0, ans = 0;
    while(A[index] && index < K) {
        index++;
    }
    
    if(N == 1 && K == 1 && A[0] == 0) index = 0;
    cout << index << endl;
}