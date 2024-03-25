#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> A(N);
    int A_min = 1000000001, A_max = -1;
    for(int i=0; i<N; i++) {
        cin >> A[i];
        A_min = min(A_min, A[i]);
        A_max = max(A_max, A[i]);
    }
    for(int i=0; i<N; i++) A[i] -= A_min;

    map<int, long long> p;
    for(int i=2; i<=A_max; i++) {
        
        for(int j=1; j<=tmp; j++) {
            //if(tmp%j != 0) continue;
            p[tmp%j]++;
            //if(j != tmp/j) p[tmp/j]++;
        }
    }

    for(auto i : p) cout << i.first << " " << i.second << endl;
}