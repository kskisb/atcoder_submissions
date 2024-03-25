#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    vector<vector<int>> a(3, vector<int>(3));
    for(int i=0; i<3; i++) for(int j=0; j<3; j++) cin >> a[i][j];
    int N; cin >> N;
    vector<int> b(N); for(int i=0; i<N; i++) cin >> b[i];

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            for(int k=0; k<N; k++) {
                if(a[i][j] == b[k]) a[i][j] = 0;
            }
        }
    }

    int r1 = 0, r2 = 0, r3 = 0, c1 = 0, c2 = 0, c3 = 0, d1 = 0, d2  = 0;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(i==0 && a[i][j]==0) r1++;
            if(i==1 && a[i][j]==0) r2++;
            if(i==2 && a[i][j]==0) r3++;
            if(j==0 && a[i][j]==0) c1++;
            if(j==1 && a[i][j]==0) c2++;
            if(j==2 && a[i][j]==0) c3++;
            if(i==j && a[i][j]==0) d1++;
            if(i+j==2 && a[i][j]==0) d2++;
        }
    }

    if(r1==3 || r2==3 || r3==3 || c1==3 || c2==3 || c3==3 || d1==3 || d2==3) cout << "Yes" << endl;
    else cout << "No" << endl;
}