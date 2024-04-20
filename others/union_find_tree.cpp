#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <climits>
#include <queue>
#include <algorithm>
#include <math.h>
using namespace std;

int N;

class UnionFind {
public:
    // 親の番号を格納
    vector<int> parent;
    // 自分がいるグループの辺の数を格納
    vector<int> sides;

    UnionFind(int N) {
        parent = vector<int>(N, -1);
        sides = vector<int>(N, 0);
    }

    // 頂点 A のグループの 根 を返す
    int root(int A) {
        if(parent[A] < 0) return A;
        return parent[A] = root(parent[A]);
    }

    // 頂点 A の属しているグループの頂点数を返す
    int size(int A) {
        return -parent[root(A)];
    }

    // A と B を結合
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
    int q;
    cin >> N >> q;
    UnionFind UN(N);

    vector<bool> ans;
    for(int i=0; i<q; i++) {
        int com, u, v; cin >> com >> u >> v;
        if(com) {
            if(UN.root(u) == UN.root(v)) ans.push_back(true);
            else ans.push_back(false);
        } else {
            UN.connect(u, v);
        }
    }

    for(int i=0; i<ans.size(); i++) cout << ans[i] << endl;
}