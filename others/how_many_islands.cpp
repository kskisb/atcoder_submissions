#include <iostream>
#include <vector>
using namespace std;

vector<bool> visited;
vector<vector<int> > ans, matrix, G;
int dx[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dy[8] = {-1, -1, -1, 0, 0, 1, 1, 1};

void dfs(int v) {
    visited[v] = true;
    for(vector<int>::iterator it = G[v].begin(); it != G[v].end(); it++) {
        int next = *it;
        if(visited[next]) continue;
        dfs(next);
    }
}

vector<vector<int> > matrix_to_graph(vector<vector<int> > matrix, int h, int w) {
    G.assign(h*w, vector<int>());
    for(int i=0; i<h; i++) {
        for(int j=0; j<w; j++) {
            for(int k=0; k<8; k++) {
                if(i+dy[k] < 0 || i+dy[k] >= h || j+dx[k] < 0 || j+dx[k] >= w) continue;
                if(matrix[i+dy[k]][j+dx[k]] && matrix[i][j]) {
                    G[i*w+j].push_back((i+dy[k])*w+j+dx[k]);
                }
            }
        }
    }
    return G;
}

int main() {
    vector<int> ans_vec;
    int w=1, h=1;
    while(true) {
        cin >> w >> h;
        if(w == 0 && h == 0) break;
        matrix.assign(h, vector<int>(w));
        for(int i=0; i<h; i++) {
            for(int j=0; j<w; j++) {
                cin >> matrix[i][j];
            }
        }
        G = matrix_to_graph(matrix, h, w);
        visited.assign(w*h, true);
        for(int i=0; i<w*h; i++) if(matrix[i/w][i%w]) visited[i] = false;
        int cnt = 0;
        for(int i=0; i<h*w; i++) {
            if(visited[i]) continue;
            dfs(i);
            cnt++;
        }
        ans_vec.push_back(cnt);
    }
    for(vector<int>::iterator it = ans_vec.begin(); it != ans_vec.end(); it++) {
        cout << *it << endl;
    }
}