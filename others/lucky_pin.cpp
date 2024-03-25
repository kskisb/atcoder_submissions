#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int ans = 0;
    for(int i=0; i<1000; i++) {
        char three = i/100 + '0';
        char two = i/10 % 10 + '0';
        char one = i%10 + '0';
        int flag = 0, passed = 0;
        for(int j=0; j<n; j++) {
            if(s[j] == three) {
                flag = j;
                passed++;
                break;
            }
        }
        for(int j=flag+1; j<n; j++) {
            if(s[j] == two) {
                flag = j;
                passed++;
                break;
            }
        }
        for(int j=flag+1; j<n; j++) {
            if(s[j] == one) {
                flag = j;
                passed++;
                break;
            }
        }
        if(passed == 3) ans++;
    }
    cout << ans << endl;
}