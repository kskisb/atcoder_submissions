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

int N, M, Q;
vector<ll> a, b, c, d;

ll calc_score(const vector<int> &A) {
    ll score = 0;
    for(int i=0; i<Q; i++) if(A[b[i]] - A[a[i]] == c[i]) score += d[i];
    return score;
}

ll rec(vector<int> &A) {
    if(A.size() == N) return calc_score(A);

    ll result = 0;

    int prev_last = (A.empty() ? 1 : A.back());

    for(int add = prev_last; add<=M; add++) {
        A.push_back(add);

        result = max(result, rec(A));

        A.pop_back();
    }

    return result;
}

int main() {
    cin >> N >> M >> Q;
    a.resize(Q); b.resize(Q); c.resize(Q); d.resize(Q);
    for(int i=0; i<Q; i++) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
        a[i]--; b[i]--;
    }
    vector<int> A;
    cout << rec(A) << endl;
}