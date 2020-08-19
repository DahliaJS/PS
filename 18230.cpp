//BOJ 18230 - 2xN 예쁜 타일링 x

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, A, B, t;
    vector<int> tA, tB;
    cin >> N >> A >> B;

    for(int i=0; i<A; i++) {
        cin >> t;
        tA.push_back(t);
    }
    for(int i=0; i<B; i++) {
        cin >> t;
        tB.push_back(t);
    }
    sort(tA.begin(), tA.end(), greater<int>());
    sort(tB.begin(), tB.end(), greater<int>());

    int p;
    if(N%2) {
        p=tA[0];
        tA[0]=0;
        N--;
    }
    else p=0;

    int sumA, sumB, cnt, iA, iB;
    while(N>0) {
        sumA = sumB = cnt = 0;
        for(iA=0; iA<tA.size(); iA++) {
            if(!tA[iA]) continue;
            sumA += tA[iA];
            if(cnt++ == 1) break;
        }
        for(iB=0; iB<tB.size(); iB++) {
            if(!tB[iB]) continue;
            sumB += tB[iB];
            if(cnt == 2) break;
        }

        if(sumA > sumB) {
            tA[iA-1] = tA[iA] = 0;
            p += sumA;
        }
        else {
            tB[iB] = 0;
            p += sumB;
        }
        N -= 2;
    }
    cout << p;

    return 0;
}