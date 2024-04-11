#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <climits>
#include <queue>
#include <algorithm>
#include <math.h>
using namespace std;

map<long long, long long> prime_factorization(long long N) {
  map<long long, long long> res;
  for(long long i=2; i*i<=N; i++) {
    while(N%i == 0) {
      N /= i;
      res[i]++;
    }
  }
  if(N >= 2) res[N]++;
  return res;
}

int main() {
  long long N;
  cin >> N;

  map<long long, long long> m = prime_factorization(N);
  cout << N << ":";
  for(map<long long, long long>::iterator it = m.begin(); it != m.end(); it++) {
    for(int j=0; j<it->second; j++) cout << " " << it->first;
  }
  cout << endl;
}