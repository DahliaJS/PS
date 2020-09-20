//BOJ 10870 - 피보나치 수 5

#include <iostream>

using namespace std;

int arr[21] = {0, 1, 1, };

void fibo(int n) {
    if(!arr[n-1]) fibo(n-1);

    arr[n] = arr[n-1] + arr[n-2];
}

int main() {
    int n;
    cin >> n;
    
    if(n<2)
        cout << arr[n];
    else {
        fibo(n);
        cout << arr[n];
    }


    return 0;
}