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

// 未完成
int main() {
    int N, A, B, C, D;
    string S;
    cin >> N >> S >> A >> B >> C >> D;

    int cnt_ox = 0, cnt_xo = 0;
    for(int i=0; i<N-1; i++) {
        if(S.substr(i, 2) == "ox") cnt_ox++;
        if(S.substr(i, 2) == "xo") cnt_xo++;
    }

    bool flag_ox = false, flag_xo = false;
    if(cnt_ox >= cnt_xo) flag_ox = true;
    else flag_xo = true;

    bool flag = true;
    for(int i=0; i<N; i++) {
        if(cnt_ox >= cnt_xo) 
        if(S.substr(i, 2) == "ox" && A > 0) {
            i++; A--;
        } else if(S.substr(i, 2) == "xo" && B > 0) {
            i++; B--;
        } else if(S[i] == 'o' && C > 0) {
            C--;
        } else if(S[i] == 'x' && D > 0) {
            D--;
        } else {
            flag = false;
        }
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}