#include <iostream>
#include <string>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    vector<int> lis;

    for(int i=0; i<n; i++) {
        auto itr = lower_bound(lis.begin(), lis.end(), a[i]);
        if(itr != lis.end()) *itr = a[i];
        else lis.push_back(a[i]);
    }

    cout << lis.size() << endl;
}