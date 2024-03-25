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

int main() {
    int N;
    string S;
    cin >> N >> S;

    int r_cnt = 0, ans = 0;
    for(int i=0; i<N; i++) if(S[i] == 'R') r_cnt++;
    for(int i=0; i<N; i++) if(S[i] == 'W' && i <= r_cnt-1) ans++;
    cout << ans << endl;
}