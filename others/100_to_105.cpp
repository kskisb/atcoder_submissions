#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;

int main() {
    int X; cin >> X;
    string SX = to_string(X);
    int N = SX.size();
    N = pow(10, N-1);
    X %= N;
}