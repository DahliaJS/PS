//BOJ 2292 - 벌집

#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  long long int N, r=1, cursor=1;
  cin >> N;

  while(cursor < N)
    cursor += r++ * 6;

  cout << r;
  return 0;
}