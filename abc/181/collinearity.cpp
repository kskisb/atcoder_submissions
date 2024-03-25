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
    vector<int> x(N), y(N);
    for(int i=0; i<N; i++) cin >> x[i] >> y[i];

    for(int i=0; i<N; i++) {
        for(int j=i+1; j<N; j++) {
            for(int k=j+1; k<N; k++) {
                pair<int, int> vec1, vec2;
                vec1.first = x[i] - x[j]; vec1.second = y[i]- y[j];
                vec2.first = x[i] - x[k]; vec2.second = y[i]- y[k];
                if(vec1.first*vec2.second == vec1.second*vec2.first) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
}