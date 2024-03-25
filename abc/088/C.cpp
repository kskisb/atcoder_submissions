#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    vector<vector<int>> c(3, vector<int>(3));
    for(int i=0; i<3; i++) for(int j=0; j<3; j++) cin >> c[i][j];
    
    vector<int> a(3), b(3);
    for(int i=0; i<=100; i++) {
        for(int j=0; j<=100; j++) {
            a[0] = i; b[0] = j;
            a[1] = a[0] + c[1][0] - c[0][0];
            a[2] = a[0] + c[2][0] - c[0][0];
            b[1] = b[0] + c[0][1] - c[0][0];
            b[2] = b[0] + c[0][2] - c[0][0];
            if(a[1]+b[1]==c[1][1] && a[2]+b[1]==c[2][1] && a[1]+b[2]==c[1][2] && a[2]+b[2]==c[2][2]) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}