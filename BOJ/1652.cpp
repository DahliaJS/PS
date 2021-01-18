//BOJ 1652 - 누울 자리를 찾아라

#include <iostream>

using namespace std;

int main() {
    char space[101][101];
    int N;
    cin >> N;
    for(int i=0; i<N; i++) 
        for(int j=0; j<N; j++)
            cin >> space[i][j];
    
    int x=0, y=0;
    bool chk;
    for(int i=0; i<N; i++) {
        chk = false;
        for(int j=0; j<N-1; j++) {
            if(space[i][j] == 'X') {
                chk = false;
                continue;
            }
            if(chk) continue;
            if(space[i][j] == '.' && space[i][j+1] == '.') {
                x++;
                chk = true;
            }
        }
    }

    for(int i=0; i<N; i++) {
        chk = false;
        for(int j=0; j<N-1; j++) {
            if(space[j][i] == 'X') {
                chk = false;
                continue;
            }
            if(chk) continue;
            if(space[j][i] == '.' && space[j+1][i] == '.') {
                y++;
                chk = true;
            }
        }
    }

    cout << x << ' ' << y;
    return 0;
}