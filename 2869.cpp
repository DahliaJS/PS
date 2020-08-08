//BOJ 2869 - 달팽이는 올라가고 싶다

#include <iostream>

using namespace std;

int main() {
    long long A, B, V;
    cin >> A >> B >> V;

    long long day;
    if(A==V)
        day = 1;
    else {
        day = (V-A) / (A-B);
        while(day*(A-B)+A <= V) {
            day++;
            if((V-A)%(A-B)) day++;
        }
    }
    cout << day;
    return 0;
}