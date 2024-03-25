#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using veci = vector<int>;
using vecll = vector<ll>;
using vecd = vector<double>;
using vveci = vector<veci>;
using vvecll = vector<vecll>;
using vvecd = vector<vecd>;
using Graph = vector<vector<int>>;
#define rep(i, l, r) for(ll i=l; i<r; i++)
#define rrep(i, l, r) for(ll i=r-1; i>=l; i--)

int N, M;

class UnionFind {
public:
    veci parent;
    veci sides;

    UnionFind(int N) {
        parent = veci(N, -1);
        sides = veci(N, 0);
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

    rep(i, 0, M) {
        int u, v; cin >> u >> v; u--; v--;
        UN.connect(u, v);
    }

    rep(i, 0, N) {
        if(UN.parent[i] < 0) {
            if(UN.size(i) != UN.sides[i]) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
}