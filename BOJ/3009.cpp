//BOJ 3009 - 네 번째 점

#include <iostream>

using namespace std;

int y[1001], x[1001];

int main() {
    for(int i=0; i<3; i++) {
        int a, b;
        cin >> a >> b;
        y[a]++;
        x[b]++;
    }

    int f_x, f_y;
    for(int i=1; i<1001; i++) {
        if(y[i] == 1) f_y = i;
        if(x[i] == 1) f_x = i;
    }
    cout << f_y << ' ' << f_x;
    return 0;
}