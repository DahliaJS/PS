//BOJ 1205 - 등수 구하기

#include <iostream>

using namespace std;

int main() 
{
    int N, S, P;
    cin >> N >> S >> P;

    int scoreBoard[P];
    int index=0, i=0;
    for(i=0; i<N; i++) 
    {
        int t;
        cin >> t;

        if(index != P) 
        {
            scoreBoard[index] = t;
            index++;
        }
    }

    index = 1;
    int dup = 0;
    for(i=0; (i<P && i<N); i++)
    {
        if(scoreBoard[i] > S)
            index++;
            
        if(scoreBoard[i] == S)
            dup++;
    }
    if(P == N && scoreBoard[i-1] == S)
        index += dup;
    if(index > P)
        index = -1;

    cout << index;

    return 0;
}