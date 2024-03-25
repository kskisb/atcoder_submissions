#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
#include <set>
#include <queue>
using namespace std;
using ll=long long;

int main() {
    string S; cin >> S;
    int n = S.size();
    if(S.substr(n-2) == "er") cout << "er" << endl;
    else cout << "ist" << endl;
}