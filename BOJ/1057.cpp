//BOJ 1057 - 토너먼트

#include <iostream>

using namespace std;

void next(int &participant) {
    if(participant % 2)
        participant = participant/2 + 1;
    else
        participant = participant/2;
}

int main() {
    int N, KJM, LHS, round=1;
    cin >> N >> KJM >> LHS;

    bool encounter=false;
    
    for (int i=0; i<N; i++)
    {
        for (int j=1; j<=N; j+=2)
            if ((j == KJM && j+1 == LHS) || (j == LHS && j+1 == KJM))
            {
                encounter = true;
                break;
            }
        
        if(encounter) break;
        
        next(N);
        next(KJM);
        next(LHS);
        round++;
    }
    cout << round;


    return 0;
}