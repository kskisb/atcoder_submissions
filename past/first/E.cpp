#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<vector<char>> G(N);
    for(int i=0; i<N; i++) {
        G[i].assign(N, 'N');
    }

    for(int q=0; q<Q; q++) {
        int t, x; cin >> t >> x; x--;
        if(t == 1) {
            int y; cin >> y; y--;
            G[x][y] = 'Y';
        } else if(t == 2) {
            for(int i=0; i<N; i++) {
                if(G[i][x] == 'Y') G[x][i] = 'Y';
            }
        } else {
            vector<int> follow;
            for(int i=0; i<N; i++) if(G[x][i] == 'Y') follow.push_back(i);
            for(int i=0; i<follow.size(); i++) {
                for(int j=0; j<N; j++) {
                    if(G[follow[i]][j] == 'Y') G[x][j] = 'Y';
                }
            }
        }
    }

    for(int i=0; i<N; i++) for(int j=0; j<N; j++) if(i == j) G[i][j] = 'N';

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) cout << G[i][j];
        cout << endl;
    }
}