#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <climits>
#include <queue>
#include <algorithm>
#include <math.h>
using namespace std;

int time_to_number(string S) {
    int res;
    int h = (int(S[0]-'0')*10+int(S[1]-'0'));
    int m = (int(S[3]-'0')*10+int(S[4]-'0'));
    int s = (int(S[6]-'0')*10+int(S[7]-'0'));
    res = h*60*60 + m*60 + s;
    return res;
}

int main() {
    vector<int> ans;
    while(true) {
        int n; cin >> n;
        if(n == 0) break;
        vector<int> trains(100000, 0), time_l(100000, 0), time_r(100000, 0);
        for(int i=0; i<n; i++) {
            string l, r; cin >> l >> r;
            int left = time_to_number(l), right = time_to_number(r);
            time_l[left]++;
            time_r[right]++;
        }
        int tmp = 0, ans_tmp = 0;
        for(int i=0; i<100000; i++) {
            tmp -= time_r[i];
            tmp += time_l[i];
            trains[i] = tmp;
            ans_tmp = max(ans_tmp, trains[i]);
        }
        ans.push_back(ans_tmp);
    }
    for(int i=0; i<ans.size(); i++) cout << ans[i] << endl;
}
