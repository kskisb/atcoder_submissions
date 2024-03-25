#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;

int main() {
    int N; cin >> N;
    vector<vector<int>> G(N);

    for(int i=1; i<N; i++) {
        int a; cin >> a; a--;
        G[a].push_back(i);
    }

    for(int i=0; i<N; i++) cout << G[i].size() << endl;
}