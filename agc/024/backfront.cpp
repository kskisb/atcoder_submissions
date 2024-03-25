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
    int N;
    cin >> N;
    vector<int> P(N+1), Q(N+1);
    for(int i=1; i<N+1; i++) cin >> P[i];
    for(int i=1; i<N+1; i++) Q[P[i]] = i;

    int cnt = 1, cnt_max = 1;
    for(int i=1; i<N; i++) {
        if(Q[i] < Q[i+1]) cnt++;
        else {
            cnt_max = max(cnt_max, cnt);
            cnt = 1;
        }
        if(i == N-1) cnt_max = max(cnt_max, cnt);
    }

    cout << N - cnt_max << endl;
}