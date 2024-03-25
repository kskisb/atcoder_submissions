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

string num_to_binary(ll N) {
    if(!N) return "0";
    
    string str;
    while(N != 0) {
        if((N & 1) == 0) {
            str.insert(str.begin(), '0');
        } else {
            str.insert(str.begin(), '1');
        }
        N >>= 1;
    }
    return str;
}

ll binary_to_num(string bin) {
    ll twopow = 1, res = 0;

    rrep(i, 0, bin.size()) {
        if(bin[i] == '1') res += twopow;
        twopow *= 2;
    }

    return res;
}

int main() {
    ll N, X; cin >> N >> X;
    string S; cin >> S;

    string ans = num_to_binary(X);

    rep(i, 0, N) {
        if(S[i] == 'U') {
            ans.pop_back();
        } else if(S[i] == 'L') {
            ans.push_back('0');
        } else {
            ans.push_back('1');
        }
    }

    cout << binary_to_num(ans) << endl;
}