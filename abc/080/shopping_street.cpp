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

int N;
vector<vector<int>> F, P;
ll ans = LLONG_MIN;

void check(vector<int> &open_or_closed) {
    ll ans_tmp = 0;
    for(int i=0; i<N; i++) {
        int cnt = 0;
        for(int j=0; j<10; j++) if(F[i][j] && open_or_closed[j]) cnt++;
        ans_tmp += P[i][cnt];
    }
    ans = max(ans, ans_tmp);
}

void rec(vector<int> &open_or_closed, int n) {
    if(n == 10) {
        int closed = 0;
        for(int i=0; i<10; i++) closed += open_or_closed[i];
        if(closed == 0) return;
        check(open_or_closed);
        return;
    }

    for(int i=0; i<2; i++) {
        open_or_closed.push_back(i);
        rec(open_or_closed, n+1);
        open_or_closed.pop_back();
    }
}

int main() {
    cin >> N;
    F.assign(N, vector<int>(10));
    P.assign(N, vector<int>(11));
    for(int i=0; i<N; i++) for(int j=0; j<10; j++) cin >> F[i][j];
    for(int i=0; i<N; i++) for(int j=0; j<11; j++) cin >> P[i][j];

    vector<int> open_or_closed;
    rec(open_or_closed, 0);
    cout << ans << endl;
}