#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<char>> c(h, vector<char>(w)), c_ans(2*h, vector<char>(w));
    for(int i=0; i<h; i++) for(int j=0; j<w; j++) cin >> c[i][j];

    for(int i=0; i<h; i++) {
        for(int j=0; j<w; j++) {
            c_ans[i*2][j] = c[i][j];
            c_ans[i*2+1][j] = c[i][j];
        }
    }
    cout << endl;
    for(int i=0; i<h*2; i++) {
        for(int j=0; j<w; j++) {
            cout << c_ans[i][j];
        }
        cout << endl;
    }
}