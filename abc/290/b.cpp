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
    int N, K;
    string S;
    cin >> N >> K >> S;
    string ans;
    rep(i, 0, N) {
        if(K != 0 && S[i] == 'o') {
            ans.push_back('o');
            K--;
        } else {
            ans.push_back('x');
        }
    }
    cout << ans << endl;
}