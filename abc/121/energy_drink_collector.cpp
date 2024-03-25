#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<pair<long long, long long>> ab(N);
    for(int i=0; i<N; i++) {
        long long a, b;
        cin >> a >> b;
        ab[i] = make_pair(a, b);
    }
    sort(ab.begin(), ab.end());

    long long min_money = 0;
    for(int i=0; i<N; i++) {
        if(ab[i].second <= M) {
            min_money += ab[i].first * ab[i].second;
            M -= ab[i].second;
        } else {
            min_money += ab[i].first * M;
            break;
        }
    }
    cout << min_money << endl;
}