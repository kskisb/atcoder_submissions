#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

double distance(vector<int> x1, vector<int> x2) {
    int sum = 0;
    for(int i=0; i<x1.size(); i++) {
        sum += (x1[i] - x2[i])*(x1[i] - x2[i]);
    }
    return sqrt(sum);
}

int main() {
    int N, D;
    cin >> N >> D;
    vector<vector<int>> x(N, vector<int>(D));
    for(int i=0; i<N; i++) for(int j=0; j<D; j++) cin >> x[i][j];

    int cnt = 0;
    for(int i=0; i<N; i++) {
        for(int j=i+1; j<N; j++) {
            double dist = distance(x[i], x[j]);
            if(dist == round(dist)) cnt++;
        }
    }
    cout << cnt << endl;
}