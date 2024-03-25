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
    int N; cin >> N;
    vector<int> A(N); for(int i=0; i<N; i++) cin >> A[i];
    map<int, int> nums;
    for(int i=0; i<N; i++) nums[A[i]]++;

    for(auto n : nums) {
        if(n.second%2 == 0) nums[n.first] = 2;
        else nums[n.first] = 1;
    }
    int cnt = 0;
    for(auto n : nums) if(n.second == 2) cnt++;
    if(cnt%2 == 0) cout << nums.size() << endl;
    else cout << nums.size() - 1 << endl;
}