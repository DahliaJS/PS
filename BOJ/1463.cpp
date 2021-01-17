//BOJ 1463 - 1로 만들기

#include <iostream>

using namespace std;

int arr[1000001];

int main() {
    int N;
    cin >> N;

    arr[1] = 0;
    arr[2] = 1;
    arr[3] = 1;
    for(int i=4; i<=N; i++) {
        arr[i] = 2000000000;
        if(i%3==0) arr[i] = min(arr[i], arr[i/3]+1);
        if(i%2==0) arr[i] = min(arr[i], arr[i/2]+1);
        arr[i] = min(arr[i], arr[i-1]+1);
    }
    cout << arr[N];

    return 0;
}