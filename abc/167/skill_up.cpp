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

int N, M, X;
vector<int> C, algo;
vector<vector<int>> A;

bool understanding() {
    bool flag = true;
    for(int i=1; i<M+1; i++) if(algo[i] < X) flag = false;
    return flag;
}

ll rec(int n, const int &price) {
    // 終了条件
    if(n == N) {
        if(understanding() == true) return price;
        else return 10000000;
    }

    ll result = 10000000;

    ll score = rec(n+1, price);
    result = min(result, score);

    for(int i=1; i<M+1; i++) algo[i] += A[n+1][i];
    score = rec(n+1, price + C[n+1]);
    for(int i=1; i<M+1; i++) algo[i] -= A[n+1][i];
    result = min(result, score);

    return result;
}

int main() {
    cin >> N >> M >> X;
    C.resize(N+1);
    A.resize(N+1);
    algo.assign(M+1, 0);
    for(int i=1; i<N+1; i++) {
        cin >> C[i];
        A[i].resize(M);
        for(int j=1; j<M+1; j++) cin >> A[i][j];
    }

    int price = 0;
    ll ans = rec(0, price);
    if(ans == 10000000) ans = -1;
    cout << ans << endl;
}