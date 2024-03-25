#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;

int main() {
    int N, Q; cin >> N >> Q;
    string S; cin >> S;

    vector<int> AC(N, 0);
    for(int i=1; i<N; i++) {
        if(S.substr(i-1, 2) == "AC") AC[i] = AC[i-1] + 1;
        else AC[i] = AC[i-1];
    }

    vector<int> ans(Q);
    for(int q=0; q<Q; q++) {
        int l, r; cin >> l >> r;
        ans[q] = AC[r-1] - AC[l-1];
    }

    for(int q=0; q<Q; q++) cout << ans[q] << endl;
}