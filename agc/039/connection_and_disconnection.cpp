#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;

int main() {
    string S;
    long long K;
    vector<long long> num;
    cin >> S >> K;
    for(int i=0; i<S.size();) {
        int j = i;
        while(j < S.size() && S[i] == S[j]) j++;
        num.push_back(j-i);
        i = j;
    }

    long long ans = 0;
    if(S[0] != S.back()) {
        for(int i=0; i<num.size(); i++) ans += num[i]/2;
        cout << ans*K << endl;
    } else {
        if(num.size() == 1) cout << num[0]*K/2 << endl;
        else {
            long long l = num[0], r = num.back(), ans = 0;
            for(int i=1; i<num.size()-1; i++) ans += num[i]/2;
            cout << ans*K + (l + r)/2*(K-1) + l/2 + r/2 << endl;
        }
    }
}