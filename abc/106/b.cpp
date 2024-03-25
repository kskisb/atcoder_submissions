#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    for(int i=0; i<=n; i++) {
        if(i%2 == 0) continue;
        int prime_cnt = 0;
        for(int j=1; j<=i; j++) {
            if(i%j == 0) prime_cnt++;
        }
        if(prime_cnt == 8) cnt++;
    }
    cout << cnt << endl;
}