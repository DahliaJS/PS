//BOJ 2164 - 카드2

#include <iostream>
#include <deque>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int N;
  deque<int> deck;
  cin >> N;

  for(int i=1; i<=N; i++)
    deck.push_back(i);

  while(deck.size() > 1) {
    deck.pop_front();
    deck.push_back(deck.front());
    deck.pop_front();
  }
  cout << deck.at(0);

  return 0;
}