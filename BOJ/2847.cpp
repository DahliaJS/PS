//BOJ 2847 - 게임을 만든 동준이

#include <iostream>
#include <vector>

using namespace std;

vector<int> score;
int cnt;

int main() {
    int N; cin >> N;
    for(int i=0; i<N; i++) {
        int a; cin >> a;
        score.push_back(a);
    }

    for(int i=N-2; i>=0; i--) {
        if(score[i] >= score[i+1]) {
            int d = score[i] - score[i+1] + 1;
            score[i] -= d;
            cnt += d;
        }
    }

    cout << cnt;
    return 0;
}