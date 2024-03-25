#include <iostream>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    int sum = 0, ans = 0;
    for(int i=1; i<=N; ++i) {
        int tmp = i;
        while(tmp != 0) {
            sum = sum + tmp%10;
            tmp /= 10;
        }
        if(sum >= A && sum <= B) ans += i;
        sum = 0;
    }
    cout << ans << endl;
}