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
    int N; cin >> N;
    vector<char> ans(9, '1');

    if(N%10 == 0) ans[0] = ((N/10)%10 - 1) + '0';
    else ans[0] = (N/10)%10 + '0';
    ans[2] = ans[0];

    ans[1] = (N%10-1) + '0';
    if(ans[1] == '/') ans[1] = '9';

    ans[3] = (N/100)%10 + '0';
    ans[4] = ans[3];

    ans[5] = (N/1000)%10 + '0';
    ans[6] = (N/10000)%10 + '0';

    int tmp = (N/100000)%10 + 1;
    ans[7] = tmp + '0';
    ans[8] = ans[7];

    if(N == 900000) {
        rep(i, 0, 9) cout << 9;
        cout << endl;
    } else {
        rrep(i, 0, 9) cout << ans[i];
        cout << endl;
    }
}