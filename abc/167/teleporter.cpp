#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
#include <deque>
using namespace std;
using ll=long long;

int main() {
    int N;
    ll K;
    cin >> N >> K;
    vector<int> A(N);
    for(int i=0; i<N; i++) {
        cin >> A[i];
        A[i]--;
    }

    deque<int> a;
    vector<bool> visited(N, false);
    int current = 0;
    while(true) {
        if(visited[current]) {
            while(a[0] != current) {
                K--;
                a.pop_front();

                if(K == 0) {
                    cout << a[0] + 1 << endl;
                    return 0;
                }
            }
            break;
        }
        a.push_back(current);
        visited[current] = true;
        current = A[current];
    }
    cout << a[K%a.size()] + 1 << endl;
}