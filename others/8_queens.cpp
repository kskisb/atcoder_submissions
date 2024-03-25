#include <bits/stdc++.h>
using namespace std;

int main() {
    int k; cin >> k;
    vector<vector<bool> > board(8, vector<bool>(8, false));
    vector<vector<bool> > ans(8, vector<bool>(8, false));

    set<int> R, C;
    for(int i=0; i<k; i++) {
        int r, c; cin >> r >> c;
        R.insert(r);
        C.insert(c);
        board[r][c] = true;
        ans[r][c] = true;
        for(int i=0; i<8; i++) board[i][c] = true;
        for(int i=0; i<8; i++) board[r][i] = true;
        for(int i=0; i<8; i++) {
            if(r+i < 8 && c+i < 8) board[i+r][i+c] = true;
            if(r+i < 8 && c-i > -1) board[r+i][c-i] = true;
            if(r-i > -1 && c+i < 8) board[r-i][c+i] = true;
            if(r-i > -1 && c-i > -1) board[r-i][c-i] = true;
        }
    }

    vector<int> row, col;
    for(int i=0; i<8; i++) {
        if(R.find(i) == R.end()) row.push_back(i);
    }
    for(int i=0; i<8; i++) {
        if(C.find(i) == C.end()) col.push_back(i);
    }

    int column[8-k];
    for(int i=0; i<8-k; i++) column[i] = col[i];

    do {
        vector<vector<bool> > tmp = board;
        vector<vector<bool> > ans_tmp = ans;
        for(int l=0; l<8-k; l++) {
            if(!tmp[row[l]][column[l]]) tmp[row[l]][column[l]] = true;
            else break;
            ans_tmp[row[l]][column[l]] = true;
            for(int i=0; i<8; i++) tmp[i][column[l]] = true;
            for(int i=0; i<8; i++) tmp[row[l]][i] = true;
            for(int i=0; i<8; i++) {
                if(row[l]+i < 8 && column[l]+i < 8) tmp[i+row[l]][i+column[l]] = true;
                if(row[l]+i < 8 && column[l]-i > -1) tmp[row[l]+i][column[l]-i] = true;
                if(row[l]-i > -1 && column[l]+i < 8) tmp[row[l]-i][column[l]+i] = true;
                if(row[l]-i > -1 && column[l]-i > -1) tmp[row[l]-i][column[l]-i] = true;
            }
        }

        int cnt = 0;
        bool flag = true;
        for(int i=0; i<8; i++) {
            for(int j=0; j<8; j++) {
                if(!tmp[i][j]) flag = false;
                if(ans_tmp[i][j]) cnt++;
            }
        }

        if(flag && cnt == 8) {
            for(int i=0; i<8; i++) {
                for(int j=0; j<8; j++) {
                    if(ans_tmp[i][j]) cout << "Q";
                    else cout << ".";
                }
                cout << endl;
            }
            break;
        }
    } while(next_permutation(column, column + 6));
}