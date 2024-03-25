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
#define rep(i, l, r) for(int i=l; i<r; i++)
#define rrep(i, l, r) for(int i=r-1; i>=l; i--)

// 頂点 N, 辺の数 M
int N, M;

class UnionFind {
public:
    // 親の番号を格納
    veci parent;
    // 自分がいるグループの辺の数を格納
    veci sides;

    UnionFind(int N) {
        parent = veci(N, -1);
        sides = veci(N, 0);
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
    cin >> N >> M;
    UnionFind UN(2*N);

    rep(i, 0, N) {
        int r = i*2, b = i*2+1;
        UN.connect(r, b);
    }

    int cnt = 0;
    rep(i, 0, M) {
        int a, c;
        char b, d;
        cin >> a >> b >> c >> d;
        if(b == 'R') a = (a-1)*2;
        else a = (a-1)*2 + 1;
        if(d == 'R') c = (c-1)*2;
        else c = (c-1)*2 + 1;
        if(UN.root(a) == UN.root(c)) cnt++;
        UN.connect(a, c);
    }

    int cnt2 = 0;
    rep(i, 0, 2*N) {
        if(i == UN.root(i)) cnt2++;
    }
    cout << cnt << " " << cnt2 - cnt << endl;
}