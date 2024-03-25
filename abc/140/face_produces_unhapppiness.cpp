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

int main() {
    int N, K;
    string S;
    cin >> N >> K >> S;

    int cnt = 0;
    for(int i=0; i<N-1; i++) if(S[i] != S[i+1]) cnt++;
    cout << N - 1 - max(cnt-K*2, 0) << endl;
}