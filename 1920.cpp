//BOJ 1920 - 수 찾기

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int N, M;
  vector<int> A;
  cin >> N;
  for(int i=0; i<N; i++) {
    cin >> M;
    A.push_back(M);
  }

  sort(A.begin(), A.end());
  cin >> M;
  for(int i=0; i<M; i++) {
    cin >> N;
    cout << binary_search(A.begin(), A.end(), N) << '\n';
  }

  return 0;
}