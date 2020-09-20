//BOJ 1932 - 정수 삼각형

#include <iostream>

using namespace std;

int triangle[501][501];
int table[501][501];

void dp(int n) {
    if(!table[n][n-1]) dp(n-1);
    table[n][0] = table[n-1][0] + triangle[n][0];
    for(int i=1; i<n-1; i++)
        table[n][i] = max(table[n-1][i-1] + triangle[n][i], table[n-1][i] + triangle[n][i]);
    table[n][n-1] = table[n-1][n-2] + triangle[n][n-1];
}

int main() {
    int n, t;
    cin >> n;
    for(int i=1; i<=n; i++)
        for(int j=0; j<i; j++) {
            cin >> t;
            triangle[i][j] = t;
        }
    
    if(n==1) cout << triangle[1][0];
    else {
        table[1][0] = triangle[1][0];
        table[2][0] = triangle[2][0] + table[1][0];
        table[2][1] = triangle[2][1] + table[1][0];

        dp(n);
        int answer = table[n][0];
        for(int i=1; i<n; i++)
            if(answer < table[n][i]) answer = table[n][i];
        
        cout << answer;
    }

    return 0;
}