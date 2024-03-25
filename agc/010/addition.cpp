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
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i=0; i<N; i++) cin >> a[i];

    int even = 0, odd = 0;
    for(int i=0; i<N; i++) {
        if(a[i]%2 == 0) even++;
        else odd++;
    }

    if(even%2 == 0 && odd%2 == 0) cout << "YES" << endl;
    else if(even%2 == 1 && odd%2 == 0) cout << "YES" << endl;
    else if(even%2 == 0 && odd%2 == 1) cout << "NO" << endl;
    else cout << "NO" << endl;
}