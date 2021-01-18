//BOJ 1065 - 한수

#include <iostream>

using namespace std;

int main() {
    int N, first, second, third;
    cin >> N;

    if(N < 100) {
        cout << N;
        return 0;
    }

    int cnt=99;
    for(int i=111; i<=N; i++) {
        first = i / 100;
        third = i % 10;
        second = (i % 100 - third) / 10;

        if(first - second == second - third) cnt++;
    }
    cout << cnt;

    return 0;
}