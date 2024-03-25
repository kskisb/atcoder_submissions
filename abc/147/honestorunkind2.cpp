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

int N, ans = 0;
vector<int> A;
vector<vector<int>> x, y;

void check(vector<int> &persons) {

    bool flag = true;
    for(int i=0; i<N; i++) {
        if(!persons[i]) continue;
        for(int j=0; j<A[i]; j++) {
            if(!persons[x[i][j]-1] && y[i][j]) flag = false;
            if(persons[x[i][j]-1] && !y[i][j]) flag = false;
        }
    }

    int cnt = 0;
    if(flag) {
        for(int i=0; i<N; i++) if(persons[i]) cnt++;
        ans = max(ans, cnt);
    }
}

void rec(vector<int> &persons) {
    if(persons.size() == N) {
        check(persons);
        return;
    }

    for(int i=0; i<2; i++) {
        persons.push_back(i);
        rec(persons);
        persons.pop_back();
    }
}

int main() {
    cin >> N;
    A.resize(N);
    x.resize(N);
    y.resize(N);
    for(int i=0; i<N; i++) {
        cin >> A[i];
        x[i].resize(A[i]);
        y[i].resize(A[i]);
        for(int j=0; j<A[i]; j++) cin >> x[i][j] >> y[i][j];
    }

    vector<int> persons;
    rec(persons);
    cout << ans << endl;
}