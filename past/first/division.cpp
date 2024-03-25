#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
#include <set>
using namespace std;
using ll=long long;

int N;
int ans = INT_MIN;
vector<vector<int>> a;

void calcmax(vector<int> &division) {
    int tmp = 0;
    for(int i=0; i<N-1; i++) {
        for(int j=i+1; j<N; j++) {
            if(division[i] == division[j]) tmp += a[i][j];
        }
    }
    ans = max(ans, tmp);
}

void rec(vector<int> &division, int n) {
    if(n == N) {
        calcmax(division);
        return;
    }

    for(int i=0; i<3; i++) {
        division.push_back(i);
        rec(division, n+1);
        division.pop_back();
    }
}

int main() {
    cin >> N;
    a.resize(N-1);
    for(int i=0; i<N-1; i++) {
        a[i].assign(N, 0);
        for(int j=i+1; j<N; j++) cin >> a[i][j];
    }

    vector<int> division;
    rec(division, 0);
    cout << ans << endl;
}