#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int h, w, x, y;
    cin >> h >> w >> x >> y;
    vector<string> s(h);
    for(int i=0; i<h; i++) cin >> s[i];

    int cnt = 0;
    int i=x-1, j=y;
    if(j<w) {
        while(s[i][j] != '#') {
            cnt++; j++;
            if(j>w-1) break;
        }
    }
    
    i=x-1; j=y-2;
    if(j>=0) {
        while(s[i][j] != '#') {
            cnt++; j--;
            if(j<0) break;
        }
    }
    
    i=x; j=y-1;
    if(i<h) {
        while(s[i][j] != '#') {
            cnt++; i++;
            if(i>h-1) break;
        }
    }
    
    i=x-2; j=y-1;
    if(i>=0) {
        while(s[i][j] != '#') {
            cnt++; i--;
            if(i<0) break;
        }
    }

    cout << cnt+1 << endl;
}