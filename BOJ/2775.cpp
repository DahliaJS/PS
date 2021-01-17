//BOJ 2775 - 부녀회장이 될테야

#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int T, k, n;
	cin >> T;

	int apartment[15][15];
	for(int i=0; i<15; i++)
		for(int j=0; j<15; j++)
			apartment[i][j] = -1;

	for(int i=0; i<15; i++) {
		apartment[0][i] = i+1;
		apartment[i][0] = 1;
	}

	for(int i=0; i<T; i++) {
		cin >> k >> n;
		if(apartment[k][n-1] > 0)
			cout << apartment[k][n-1] << '\n';
		else {
			for(int j=1; j<=k; j++)
				for(int jj=1; jj<=n-1; jj++)
					apartment[j][jj] = apartment[j-1][jj] + apartment[j][jj-1];

			cout << apartment[k][n-1] << '\n';
		}
	}

	return 0;
}