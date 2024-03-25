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

int main() {
    string S, T, S2, T2; cin >> S >> T;
    vector<pair<char, int>> Scheck, Tcheck;

    rep(i, 0, S.size()) {
        int j = i;
        while(j < (int)S.size() && S[i] == S[j]) j++;
        Scheck.push_back(make_pair(S[i], j-i));
        i = j-1;
    }

    rep(i, 0, T.size()) {
        int j = i;
        while(j < (int)T.size() && T[i] == T[j]) j++;
        Tcheck.push_back(make_pair(T[i], j-i));
        i = j-1;
    }

    if(Scheck.size() != Tcheck.size()) {
        cout << "No" << endl;
        return 0;
    } else {
        rep(i, 0, Scheck.size()) {
            if(Scheck[i].first != Tcheck[i].first) {
                cout << "No" << endl;
                return 0;
            } else {
                if(Scheck[i].second == 1 && Tcheck[i].second != 1) {
                    cout << "No" << endl;
                    return 0;
                }
                if(Scheck[i].second > Tcheck[i].second) {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "Yes" << endl;
}