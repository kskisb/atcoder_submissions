#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> E(N, 0), W(N, 0);
    for(int i=0; i<N; i++) {
        char c; cin >> c;
        if(c == 'E') E[i]++;
        else W[i]++;
        if(i>0) {
            E[i] += E[i-1];
            W[i] += W[i-1];
        }
    }

    int ans = 300009;
    for(int i=0; i<N; i++) {
        if(i == 0) ans = min(ans, E[N-1]);
        else ans = min(ans, W[i-1] + E[N-1] - E[i]);
    }
    cout << ans << endl;
}