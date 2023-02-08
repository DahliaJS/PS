//BOJ 2670 - 연속부분최대곱

#include <iostream>

using namespace std;

double dp[10001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    for (int i=0; i<N; i++)
    {
        cin >> dp[i];
    }

    double mx = -1, temp;
    for (int i=0; i<N; i++)
    {
        temp = dp[i];
		if (mx < temp) 
            mx = temp;
		for (int j=i+1; j<N; j++) 
        {
			temp *= dp[j];
			if (mx < temp) 
                mx = temp;
		}
    }
    printf("%.3f", mx);

    return 0;
}