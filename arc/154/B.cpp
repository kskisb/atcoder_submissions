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
    int N;
    string S, T, tmpS, tmpT;
    cin >> N >> S >> T;
    tmpS = S; tmpT = T;
    sort(tmpS.begin(), tmpS.end());
    sort(tmpT.begin(), tmpT.end());

    cout << endl << endl << tmpS << endl << endl;
    cout << tmpT << endl;

    if(tmpS != tmpT) {
        cout << -1 << endl;
    } else {
        int ans = N;
        rrep(i, 0, N) {
            string X = S.substr(i);
            if(T.find(X) != -1) ans--;
            else {
                if(S.substr(i+1) == T.substr(i+1)) ans--;
                break;
            }
        }
        cout << ans << endl;
    }
}