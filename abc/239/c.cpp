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
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    vector<pair<int, int>> move = {make_pair(2, 1), make_pair(1, 2), make_pair(-1, 2), make_pair(-2, 1), make_pair(-2, -1), make_pair(-1, -2), make_pair(1, -2), make_pair(2, -1)};

    for(auto i : move) {
        for(auto j : move) {
            if(x1 + i.first + j.first == x2 && y1 + i.second + j.second == y2) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}