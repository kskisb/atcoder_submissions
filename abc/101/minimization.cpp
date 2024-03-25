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
    cin >> N >> K;
    int index = -1;
    for(int i=0; i<N; i++) {
        int a; cin >> a;
        if(a == 1) {
            index = i;
            break;
        }
    }
    cout << index << endl;
}