#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> a(h);
    for(int i=0; i<h; i++) cin >> a[i];
    string white(w, '-');

    for(int i=0; i<h; i++) {
        int cwhite_cnt = 0;
        for(int j=0; j<w; j++) {
            if(a[i][j] == '.') cwhite_cnt++;
        }
        if(cwhite_cnt == w) for(int j=0; j<w; j++) a[i][j] = '-';
    }
    for(int j=0; j<w; j++) {
        int rwhite_cnt = 0;
        for(int i=0; i<h; i++) {
            if(a[i][j] == '.' || a[i][j] == '-') rwhite_cnt++;
        }
        if(rwhite_cnt == h) for(int i=0; i<h; i++) a[i][j] = '-';
    }

    for(int i=0; i<h; i++) {
        if(a[i] != white) {
            for(int j=0; j<w; j++) {
                if(a[i][j] != '-') cout << a[i][j];
            }
            cout << endl;
        }
    }
}