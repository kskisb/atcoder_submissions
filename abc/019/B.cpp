#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;

int main() {
    string s; cin >> s;

    string ans = "";
    for(int i=0; i<s.size();) {
        int j=i;
        while(j < s.size() && s[i] == s[j]) j++;
        ans += s[i] + to_string(j-i);
        i = j;
    }
    cout << ans << endl;
}