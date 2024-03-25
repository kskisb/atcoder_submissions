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
#define rep(i, l, r) for(int i=l; i<r; i++)
#define rrep(i, l, r) for(int i=r-1; i>=l; i--)

int main() {
    string S; cin >> S;

    int cnt = 0;
    for(int i=0; i<S.size(); i++) {
        if(S[i] != '0') cnt++;
        else if(i != S.size()-1 && S.substr(i, 2) == "00") {
            cnt++;
            i++;
        } else cnt++;
    }
    cout << cnt << endl;
}