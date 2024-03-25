#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
#include <set>
#include <queue>
using namespace std;
#define rep(i, l, r) for(int i=l; i<r; i++)
#define rrep(i, l, r) for(int i=r-1; i>=l; i--)
using ll = long long;

int N;
vector<int> A;

bool increase_or_decrease(int s) {
    bool flag;
    rep(i, s, N-1) {
        if(A[i] < A[i+1]) {
            flag = true; break;
        } else if(A[i] > A[i+1]) {
            flag = false; break;
        }
    }
    return flag;
}

int main() {
    cin >> N;
    A.resize(N);
    rep(i, 0, N) cin >> A[i];
    bool flag = increase_or_decrease(0);  // true : 増加   false : 減少

    int tmp_max = -1, tmp_min = -1;
    if(flag) tmp_max = A[0];
    else tmp_min = A[0];
    int ans = 0;
    
    rep(i, 1, N) {
        if(flag) {
            if(tmp_max > A[i]) {
                ans++; flag = increase_or_decrease(i);
                if(flag) tmp_max = A[i];
                else tmp_min = A[i];
            } else tmp_max = A[i];
        } else {
            if(tmp_min < A[i]) {
                ans++; flag = increase_or_decrease(i);
                if(flag) tmp_max = A[i];
                else tmp_min = A[i];
            } else tmp_min = A[i];
        }
    }
    cout << ans + 1 << endl;
}