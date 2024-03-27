#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <utility>
using namespace std;

int main() {
    vector<vector<vector<int>>> ans;
    while(true) {
        int n;
        cin >> n;
        if(n == 0) break;
        vector<int> w(n);
        for(int i=0; i<n; i++) cin >> w[i];
        vector<vector<int> > dp(n, vector<int>(n, -1));

        for(int i=n-2; i>=0; i--) {
            for(int j=i+1; j<n; j++) {
                
            }
        }

        ans.push_back(dp);

        // cout << dp[0][n-1] << endl;
    }

    for(auto a : ans) {
        for(int i=0; i<a.size(); i++) {
            for(int j=0; j<a.size(); j++) printf("%2d ", a[i][j]);
            cout << endl;
        }
        cout << endl;
    }
}