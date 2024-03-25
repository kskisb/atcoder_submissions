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
    cin >> N;
    vector<string> s(N);
    for(int i=0; i<N; i++) cin >> s[i];

    int A_cnt = 0, B_cnt = 0, B_A_cnt = 0, AB_cnt = 0;
    for(int i=0; i<N; i++) {
        if(s[i][0] == 'B' && s[i].back() == 'A') B_A_cnt++;
        else if(s[i][0] == 'B') B_cnt++;
        else if(s[i].back() == 'A') A_cnt++;
        for(int j=0; j<s[i].size()-1; j++) if(s[i].substr(j, 2) == "AB") AB_cnt++;
    }

    if(A_cnt == 0 && B_cnt == 0) cout << AB_cnt + max(B_A_cnt-1, 0) << endl;
    else cout << AB_cnt + B_A_cnt + min(A_cnt, B_cnt) << endl;
}