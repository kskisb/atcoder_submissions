#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  int H, W, N;
  cin >> H >> W >> N;

  string T;
  cin >> T;

  vector<string> S(H);
  for(int i = 0; i < H; i++) {
    cin >> S[i];
  }

  int ans = 0;
  for(int i=0; i<H; i++) {
    for(int j=0; j<W; j++) {
      if(S[i][j] == '#') continue;

      int now_i = i;
      int now_j = j;
      bool flag = true;

      for(int k=0; k<N; k++) {
        if(T[k] == 'D' && now_i + 1 < H && S[now_i + 1][now_j] == '.') {
          now_i += 1;
        } else if(T[k] == 'U' && now_i - 1 >= 0 && S[now_i - 1][now_j] == '.') {
          now_i -= 1;
        } else if(T[k] == 'R' && now_j + 1 < W && S[now_i][now_j + 1] == '.') {
          now_j += 1;
        } else if(T[k] == 'L' && now_j - 1 >= 0 && S[now_i][now_j - 1] == '.') {
          now_j -= 1;
        } else {
          flag = false;
          break;
        }
      }
        if(flag) ans += 1;
    }
  }

  cout << ans << endl;
}
