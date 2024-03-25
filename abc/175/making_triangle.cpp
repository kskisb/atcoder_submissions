#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> l(N);
    for(int i=0; i<N; i++) cin >> l[i];

    int cnt = 0;
    for(int i=0; i<N; i++) {
        for(int j=i+1; j<N; j++) {
            for(int k=j+1; k<N; k++) {
                if(l[i]+l[j]>l[k] && l[j]+l[k]>l[i] && l[k]+l[i]>l[j] && l[i]!=l[j] && l[j]!=l[k] && l[k]!=l[i]) cnt++;
            }
        }
    }
    cout << cnt << endl;
}