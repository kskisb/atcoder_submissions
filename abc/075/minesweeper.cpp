#include <iostream>
#include <vector>
using namespace std;

int check(vector<string> S, int x, int y, int H, int W) {
    int cnt = 0;
    
    for(int i=-1; i<2; i++) {
        for(int j=-1; j<2; j++) {
            if(i == 0 && j == 0) continue;
            else {
                if(x+i == -1 || x+i == H || y+j == -1 || y+j == W) continue;
                else {
                    if(S[x+i][y+j] == '#') cnt++;
                }
            }
        }
    }
    return cnt;
}

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> S(H);
    for(int i=0; i<H; i++) cin >> S[i];

    vector<vector<int>> ans(H, vector<int>(W));

    for(int i=0; i<H; i++) {
        for(int j=0; j<W; j++) {
            if(S[i][j] == '#') ans[i][j] = -1;
            else {
                int mine_num = check(S, i, j, H, W);
                ans[i][j] = mine_num;
            }
        }
    }

    for(int i=0; i<H; i++) {
        for(int j=0; j<W; j++) {
            if(ans[i][j] == -1) cout << '#';
            else cout << ans[i][j];
        }
        cout << endl;
    }
}