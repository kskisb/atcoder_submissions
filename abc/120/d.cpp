#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
#include <climits>
#include <queue>
#include <algorithm>
#include <math.h>
using namespace std;
using ll = long long;
ll INF = 1LL << 60;
ll mod = 1000000007;

ll N, M;

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

    set<int> S;
    vector<ll> ans(M), cnt(N, 1);
    ll NC2 = N*(N-1)/2;
    ans[M-1] = NC2;
    for(int i=M-1; i>=1; i--) {
        int u = edges[i].first, v = edges[i].second;
        if(UN.root(u) == UN.root(v)) ans[i-1] = ans[i];
        else {
            ans[i-1] = ans[i] - cnt[UN.root(u)]*cnt[UN.root(v)];
            ll sm = cnt[UN.root(u)] + cnt[UN.root(v)];
            UN.connect(u,v);
            cnt[UN.root(u)] = sm;
        }
    }

    for(auto a : ans) cout << a << endl;
}