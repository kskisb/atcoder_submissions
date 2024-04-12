#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <climits>
#include <queue>
#include <algorithm>
#include <math.h>
using namespace std;
using ll = long long;
ll INF = 1LL << 60;

int prime_factorization(int N) {
  int res = 0;
  for(int i=2; i*i<=N; i++) {
    while(N%i == 0) {
      N /= i;
      res++;
    }
  }
  if(N >= 2) res++;
  return res;
}

int main() {
    vector<int> cnt(100001);
    for(int i=1; i<=100000; i++) {
        int tmp1 = prime_factorization(i);
        int tmp2 = prime_factorization((i+1)/2);
        if(tmp1 == 1 && tmp2 == 1 && i%2 == 1) cnt[i] = 1 + cnt[i-1];
        else cnt[i] = cnt[i-1];
    }

    int Q; cin >> Q;
    for(int q=0; q<Q; q++) {
        int l, r; cin >> l >> r;
        cout << cnt[r] - cnt[l-1] << endl;
    }
}