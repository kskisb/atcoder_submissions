#include <iostream>
#include <vector>
using namespace std;

vector<long long> memo(10000009, -1);

long long factorial(int N) {
    if(memo[N] != -1) return memo[N];
    long long ans = 1;
    for(int i=1; i<=N; i++) {
        ans *= i;
    }
    memo[N] = ans;
    return memo[N];
}

int main() {
    int P;
    cin >> P;

    int count = 0;
    for(int i=10; i>0; i--) {
        count += P/factorial(i);
        P %= factorial(i);
    }

    cout << count << endl;
}