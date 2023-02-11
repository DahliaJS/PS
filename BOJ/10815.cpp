//BOJ 10815 - 숫자 카드

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int res;

int b_search(vector<int> &Ncards, int length, int target)
{
    int start = 0;
    int end = length-1;
    int mid = 0;
    while (start <= end)
    {
        mid = (start+end) / 2;
        if (Ncards[mid] == target)
            return 1;
        else 
        {
            if (Ncards[mid] < target)
                start = mid+1;
            else if (Ncards[mid] > target)
                end = mid-1;
        }
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int N, M;
    vector<int> Ncards, Mcards;
    cin >> N;
    for (int i=0; i<N; i++)
    {
        int t;
        cin >> t;
        Ncards.push_back(t);
    }
    cin >> M;
    for (int i=0; i<M; i++)
    {
        int t;
        cin >> t;
        Mcards.push_back(t);
    }
    sort(Ncards.begin(), Ncards.end());

    for (int i=0; i<M; i++)
    {
        int r = b_search(Ncards, N, Mcards[i]);
        cout << r << ' ';
    }
    return 0;
}