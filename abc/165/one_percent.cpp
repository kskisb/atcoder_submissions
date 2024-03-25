#include <iostream>
using namespace std;

int main() {
    long long X;
    cin >> X;

    long long deposit = 100, year = 0;
    while(deposit < X) {
        deposit += deposit/100;
        year++;
    }

    cout << year << endl;
}