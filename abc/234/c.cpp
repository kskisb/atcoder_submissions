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

string num_to_binary(ll N) {
    if(!N) return std::string("0");
    
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

int main() {
    ll K; cin >> K;
    string str = num_to_binary(K);
    rep(i, 0, str.size()) if(str[i] == '1') str[i] = '2';
    cout << str << endl;
}