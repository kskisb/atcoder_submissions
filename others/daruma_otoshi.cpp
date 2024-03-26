#include <iostream>
#include <string>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int q;
    cin >> q;
    while(true) {
        int n;
        cin >> n;
        if(n == 0) break;
        vector<int> w(n);
        for(int i=0; i<n; i++) {
            cin >> w[i];
        }
        vector< vector<int> > dp(n+1, vector<int>(n+1));
    }
}