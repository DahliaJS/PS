//BOJ 2738 - 행렬 덧셈

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> NM;
    for (int i=0; i<N*M*2; i++)
    {
        int t;
        cin >> t;
        if (i < N*M)
            NM.push_back(t);
        else
            NM[i-(N*M)] += t;
    }

    for (int i=0; i<N*M; i+=M)
    {
        for (int j=0; j<M; j++)
        {
            cout << NM[i+j] << ' ';
        }
        cout << '\n';
    }


    return 0;
}