#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using veci = vector<int>;
using vecll = vector<ll>;
using vecd = vector<double>;
using vveci = vector<veci>;
using vvecll = vector<vecll>;
using vvecd = vector<vecd>;
#define rep(i, l, r) for(int i=l; i<r; i++)
#define rrep(i, l, r) for(int i=r-1; i>=l; i--)

class UnionFind {
public:
    veci parent;

    UnionFind(int N) {
        parent = veci(N, -1);
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
        if(A == B) return false;

        if(size(A) < size(B)) swap(A, B);

        parent[A] += parent[B];
        parent[B] = A;
        
        return true;
    }
};

int main() {
    int N, M; cin >> N >> M;

    UnionFind UN(N);

    int ans = 0;
    rep(i, 0, M) {
        int a, b; cin >> a >> b;
        a--; b--;

        if(UN.root(a) == UN.root(b)) ans++;

        UN.connect(a, b);
    }
    cout << ans << endl;
}