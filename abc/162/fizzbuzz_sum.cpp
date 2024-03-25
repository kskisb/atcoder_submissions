#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long sum = 0;
    for(int i=1; i<=N; ++i) {
        if(i%3 == 0) continue;
        else if(i%5 == 0) continue;
        else sum += i;
    }
    cout << sum << endl;
}