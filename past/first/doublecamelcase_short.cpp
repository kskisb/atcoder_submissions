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
    vector<string> w;

    for(int i=0; i<s.size();) {
        int j = i+1;
        while(j < s.size() && s[j] >= 'a' && s[j] <= 'z') j++;
        string word = s.substr(i, j+1-i);
        word[0] = tolower(word[0]); word.back() = tolower(word.back());
        w.push_back(word);
        i = j+1;
    }

    sort(w.begin(), w.end());
    string ans = "";
    for(auto word : w) {
        word[0] = toupper(word[0]); word.back() = toupper(word.back());
        ans += word;
    }
    cout << ans << endl;
}