#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
#include <set>
using namespace std;
using ll=long long;

int main() {
    ll N, X, M;
    cin >> N >> X >> M;

    vector<ll> A_cp;
    set<ll> A;
    A.insert(X); A_cp.push_back(X);
    ll tmp = X;
    while(true) {
        tmp = tmp*tmp % M;
        if(A.find(tmp) != A.end()) break;
        else {
            A.insert(tmp);
            A_cp.push_back(tmp);
        }
    }

    int index = 0, rep_start = 0;
    for(auto a : A_cp) {
        if(a == tmp) {
            rep_start = index;
            break;
        }
        index++;
    }

    ll ans = 0;
    for(int i=0; i<rep_start; i++) ans += A_cp[i];
    N -= rep_start;
    int roop = A_cp.size() - rep_start;

    ll sum = 0;
    for(int i=rep_start; i<A_cp.size(); i++) sum += A_cp[i];
    ll multi = N/roop;
    ans += sum*multi;
    int remaining = N - multi*roop;
    for(int i=rep_start; i<rep_start + remaining; i++) ans += A_cp[i];
    cout << ans << endl;
}