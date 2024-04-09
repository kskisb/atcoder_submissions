#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <queue>
#include <algorithm>
#include <math.h>
using namespace std;
using ll = long long;
ll INF = 1LL << 60;

int N;

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

struct Sphere {
    double x, y, z, r;
};

double dist(Sphere S1, Sphere S2) {
    return sqrt((S1.x - S2.x)*(S1.x - S2.x) + (S1.y - S2.y)*(S1.y - S2.y) + (S1.z - S2.z)*(S1.z - S2.z));
}

int main() {
    vector<double> answers;
    while(true) {
        cin >> N;
        if(N == 0) break;
        UnionFind UN(N);
        vector<Sphere> S(N);
        vector<pair<double, pair<int, int>>> weighted_edge;

        for(int i=0; i<N; i++) cin >> S[i].x >> S[i].y >> S[i].z >> S[i].r;

        for(int i=0; i<N; i++) {
            for(int j=0; j<N; j++) {
                if(i == j) continue;
                double d = dist(S[i], S[j]);
                if(d > S[i].r+S[j].r) {
                    weighted_edge.push_back(make_pair(d-S[i].r-S[j].r, make_pair(i, j)));
                } else {
                    weighted_edge.push_back(make_pair(0, make_pair(i, j)));
                }
            }
        }

        sort(weighted_edge.begin(), weighted_edge.end());

        double ans = 0;
        for(int i=0; i<weighted_edge.size(); i++) {
            int u = weighted_edge[i].second.first;
            int v = weighted_edge[i].second.second;
            if(UN.root(u) == UN.root(v)) continue;
            else {
                ans += weighted_edge[i].first;
                UN.connect(u, v);
            }
        }
        answers.push_back(ans);
    }

    for(auto a : answers) {
        printf("%.3lf", a);
        cout << endl;
    }
}