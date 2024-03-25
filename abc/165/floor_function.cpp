#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;
using ll=long long;

int main() {
    long long A, B, N;
    cin >> A >> B >> N;

    if(N < B) cout << (A*N)/B << endl;
    else cout << (A*(B-1))/B << endl;
}