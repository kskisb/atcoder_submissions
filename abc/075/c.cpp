#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <climits>
#include <queue>
#include <algorithm>
#include <math.h>
using namespace std;

int N, M;

class UnionFind {
public:
    vector<int> parent;
    vector<int> sides;

    UnionFind(int N) {
        parent = vector<int>(N, -1);
        sides = vector<int>(N, 0);
    }

    int root(int A) {
        if(parent[A] < 0) return A;
        return parent[A] = root(parent[A]);
    }

    int size(int A) {
        return -parent[root(A)];
    }

    bool connect(int A, int B) {
        A = root(A);
        B = root(B);
        if(A == B) {
            sides[A]++;
            return false;
        }

        if(size(A) < size(B)) swap(A, B);

        parent[A] += parent[B];
        parent[B] = A;
        sides[A]++;

        return true;
    }
};

int main() {
    cin >> N >> M;
    UnionFind UN(N);

    vector<pair<int, int>> edges(M);

    for(int i=0; i<M; i++) {
        int u, v; cin >> u >> v; u--; v--;
        edges[i].first = u;
        edges[i].second = v;
    }

    int cnt = 0;
    for(int i=0; i<M; i++) {
        int u = edges[i].first, v = edges[i].second;
        UnionFind UN(N);
        for(int j=0; j<M; j++) {
            if(edges[j].first == u && edges[j].second == v) continue;
            UN.connect(edges[j].first, edges[j].second);
        }
        if(UN.root(u) != UN.root(v)) cnt++;
    }

    cout << cnt << endl;
}