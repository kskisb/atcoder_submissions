#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s, m, l; cin >> n >> s >> m >> l;

    int min_cost = 100000000;
    for(int i=0; i<101; i++) {
        for(int j=0; j<101; j++) {
            for(int k=0; k<101; k++) {
                int tmp = i*s + j*m + k*l;
                if(6*i+8*j+12*k >= n) min_cost = min(min_cost, tmp);
            }
        }
    }
    cout << min_cost << endl;
}