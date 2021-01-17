//BOJ 14697 - 방 배정하기 x

#include <iostream>

using namespace std;

int room[301];
int A, B, C, N;

void dp(int n) {
    if(n > 300 || room[n]) return;

    room[n] = 1;
    dp(n+A);
    dp(n+B);
    dp(n+C);
}

int main() {
    cin >> A >> B >> C >> N;

    if(A==1)
        cout << 1;
    else {
        dp(A);
        room[B] = 1;
        room[C] = 1;
        cout << room[N];
    }


    return 0;
}