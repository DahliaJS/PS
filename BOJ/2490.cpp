//BOJ 2490 - 윷놀이

#include <iostream>

using namespace std;

int main() {
    int c=0;
    for(int i=1; i<=12; i++) {
        int t; cin >> t;
        if(t) c++;
        if(!(i%4)) {
            switch(c) {
                case 0: cout << 'D' << '\n'; break;
                case 1: cout << 'C' << '\n'; break;
                case 2: cout << 'B' << '\n'; break;
                case 3: cout << 'A' << '\n'; break;
                case 4: cout << 'E' << '\n'; break;
            }
            c=0;
        }
    }


    return 0;
}