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
    ll N; cin >> N;
    set<ll> div;
    for(ll i=1; i*i<=N; i++) {
        if(N%i == 0) {
            div.insert(i);
            div.insert(N/i);
        }
    }
    for(auto i : div) cout << i << endl;
}