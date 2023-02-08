//BOJ 12760 - 최후의 승자는 누구?

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(int a, int b) {
    return a > b;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> player[100];
    int score[100] = {0, };
    int mx;

    for (int i=0; i<N; i++)
    {
        for (int j=0; j<M; j++)
        {
            int t;
            cin >> t;
            player[i].push_back(t);
        }
        sort(player[i].begin(), player[i].end(), comp);
    }
    
    for (int i=0; i<M; i++)
    {
        mx = 0;
        for (int j=0; j<N; j++)
        {
            if (mx < player[j][i]) 
                mx = player[j][i];
        }
        for (int j=0; j<N; j++)
        {
            if (mx == player[j][i])
                score[j]++;
        }
    }
    
    mx = 0;
    for (int i=0; i<N; i++)
    {
        if (mx < score[i])
            mx = score[i];
    }
    for (int i=0; i<N; i++)
    {
        if (mx == score[i])
            cout << i+1 << ' ';
    }


    return 0;
}