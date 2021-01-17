//BOJ 1929 - 소수 구하기

#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int M, N;
	cin >> M >> N;

	bool isPN;
	for(int i=M; i<=N; i++) {
		if(i==1) continue;
		isPN = true;
		for(int j=2; j*j<=i; j++) {
			if(i%j == 0) {
				isPN = false;
				break;
			}
		}
		if(isPN) cout << i << '\n';
	}

	return 0;
}