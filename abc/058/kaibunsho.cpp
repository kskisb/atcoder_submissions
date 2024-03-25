#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;

vector<char> alphabet = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

int main() {
    int n;
    cin >> n;
    map<char, int> ans;

    for(auto c : alphabet) ans[c] = 0;
    for(int i=0; i<n; i++) {
        string s_tmp; cin >> s_tmp;
        map<char, int> tmp;
        for(auto c : alphabet) tmp[c] = 0;
        for(auto s : s_tmp) tmp[s]++;
        for(char c = 'a'; c<='z'; c++) {
            if(i == 0) ans[c] = tmp[c];
            else ans[c] = min(ans[c], tmp[c]);
        }
    }
    for(auto c : ans) {
        for(int i=0; i<c.second; i++) cout << c.first;
    }
    cout << endl;
}