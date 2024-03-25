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
    int N, K;
    string S;
    cin >> N >> K >> S;

    vector<int> num;
    if(S[0] == '0') num.push_back(0);
    for(int i=0; i<N;) {
        int j = i;
        while(j < N && S[j] == S[i]) j++;
        num.push_back(j-i);
        i = j;
    }
    if(S.back() == '0') num.push_back(0);

    vector<int> num_sum(num.size()+1, 0);
    for(int i=0; i<num.size(); i++) num_sum[i+1] = num_sum[i] + num[i];

    int ans = 0;
    for(int l=0; l<num_sum.size(); l += 2) {
        int r = l + K*2 + 1;
        if(r >= num_sum.size()) r = num_sum.size() - 1;
        ans = max(ans, num_sum[r] - num_sum[l]);
    }
    cout << ans << endl;
}