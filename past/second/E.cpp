#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;
using ll=long long;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i=0; i<N; i++) cin >> A[i];

    for(int i=0; i<N; i++) {
        int x = A[i], j = 1;
        while(x != i+1) {
            x = A[x-1];
            j++;
        }
        cout << j << " ";
    }
    cout << endl;
}