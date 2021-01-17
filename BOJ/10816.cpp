//BOJ 10816 - 숫자 카드 2

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, M;
    map<int, int> cards;
    pair<map<int, int>::iterator, bool> pr;
    
    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> M;
        pr = cards.insert({M, 1});
        if(!pr.second) cards[M]++;
    }

    cin >> M;
    for(int i=0; i<M; i++) {
        cin >> N;
        if(cards[N]) cout << cards[N] << ' ';
        else cout << 0 << ' ';
    }

    return 0;
}