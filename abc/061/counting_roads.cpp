#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;

int main() {
    int N, M; cin >> N >> M;
    vector<int> ans(N, 0);

    for(int i=0; i<M; i++) {
        int u, v; cin >> u >> v; --u; --v;
        ans[u]++; ans[v]++;
    }
    for(int i=0; i<N; i++) cout << ans[i] << endl;
}