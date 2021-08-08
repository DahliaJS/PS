//BOJ 1526 - 가장 큰 금민수

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, i;
    cin >> N;
    
    vector<int> KMS;
    KMS.push_back(4);
    KMS.push_back(7);

    for (i=0; KMS[i]<100000; i++)
    {
        KMS.push_back(KMS[i] * 10 + 4);
        KMS.push_back(KMS[i] * 10 + 7);
    }
    
    KMS.push_back(12345678);
    for (i=0; KMS[i]<=N; i++);

    cout << KMS[i-1];
    return 0;
}