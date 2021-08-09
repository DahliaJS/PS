//BOJ 1527 - 금민수의 개수

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    
    vector<long long int> KMS;
    KMS.push_back(4);
    KMS.push_back(7);

    for (int i=0; KMS[i]<100000000; i++)
    {
        KMS.push_back(KMS[i] * 10 + 4);
        KMS.push_back(KMS[i] * 10 + 7);
    }
    
    int cnt=0;
    for (long long int i: KMS)
    {
        if (A <= i && i <= B) cnt++;
    }
    cout << cnt;
    return 0;
}