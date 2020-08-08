//BOJ 10816 - 숫자 카드 2 x

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, M;
    vector<int> cards, targets;
    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> M;
        cards.push_back(M);
    }

    cin >> M;
    for(int i=0; i<M; i++) {
        cin >> N;
        targets.push_back(N);
    }

    for(int i=0; i<targets.size(); i++) {
        cout << count(cards.begin(), cards.end(), targets[i]) << ' ';
    }

    return 0;
}