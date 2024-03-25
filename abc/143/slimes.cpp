#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;

int main() {
    int n; cin >> n;
    string s; cin >> s;

    int cnt = 0;
    for(int i=0; i<n;) {
        int j = i;
        while(j < n) {
            if(s[i] != s[j]) {
                cnt++; break;
            }
            j++;
        }
        i = j;
    }
    cout << cnt+1 << endl;
}