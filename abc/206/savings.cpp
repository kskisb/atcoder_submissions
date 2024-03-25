#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int savings = 0, day;
    for(int i=1; i<=N; i++) {
        savings += i;
        if(savings >= N) {
            day = i;
            break;
        }
    }
    cout << day << endl;
}