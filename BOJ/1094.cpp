//BOJ 1094 - 막대기

#include <iostream>

using namespace std;

bool bm[7];
int cnt;

int main() {
    int X;
    int stick=64, stick_i=0;
    cin >> X;

    while(stick > 0) 
    {
        if (X >= stick)
        {
            bm[stick_i] = 1;
            X = X - stick;
        }
        stick = stick / 2;
        stick_i++;
    }

    for(int i=0; i<7; i++)
        if(bm[i]) cnt++;

    cout << cnt;
    return 0;
}