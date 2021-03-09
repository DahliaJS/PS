//BOJ 13305 - 주유소

#include <iostream>

using namespace std;

unsigned long long city[100001], dstc[100001];
unsigned long long cost;

int main() {
    int N; cin >> N;
    for(int i=0; i<N-1; i++)
        cin >> dstc[i];
    for(int i=0; i<N; i++) 
        cin >> city[i];

    int pcost = city[0];
    cost += pcost * dstc[0];
    for(int i=1; i<N; i++) {
        if(pcost > city[i])
			pcost = city[i];
		
		cost += pcost * dstc[i];
    }
    cout << cost;

    return 0;
}