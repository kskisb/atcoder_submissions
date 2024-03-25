#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
#include <set>
using namespace std;
using ll=long long;

int N, A, B, C, ans = INT_MAX;
vector<int> l;

void calcmin(vector<int> &choose) {
    int tmpA = 0, tmpB = 0, tmpC = 0, cnt = 0;
    for(int i=0; i<N; i++) {
        if(choose[i] == 1) {
            tmpA += l[i]; cnt++;
        }
        if(choose[i] == 2) {
            tmpB += l[i]; cnt++;
        }
        if(choose[i] == 3) {
            tmpC += l[i]; cnt++;
        }
    }
    int tmp = abs(A - tmpA) + abs(B - tmpB) + abs(C - tmpC) + 10*(cnt - 3);
    ans = min(ans, tmp);
}

void rec(vector<int> &choose, int n) {
    if(n == N) {
        bool flagA = false, flagB = false, flagC = false;
        for(int i=0; i<N; i++) {
            if(choose[i] == 1) flagA = true;
            if(choose[i] == 2) flagB = true;
            if(choose[i] == 3) flagC = true;
        }
        if(flagA && flagB && flagC) calcmin(choose);
        return;
    }

    for(int i=0; i<4; i++) {
        choose.push_back(i);
        rec(choose, n+1);
        choose.pop_back();
    }
}

int main() {
    cin >> N >> A >> B >> C;
    l.resize(N);
    for(int i=0; i<N; i++) cin >> l[i];

    vector<int> choose;
    rec(choose, 0);
    cout << ans << endl;
}