//BOJ 11660 - 구간 합 구하기 5

#include <iostream>

using namespace std;

int arr[1025][1025];
int sum[1025][1025];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N, M; 
    cin >> N >> M;

    for (int i=1; i<=N; i++)
    {
        for (int j=1; j<=N; j++)
        {
            cin >> arr[i][j];
            //sum[i][j] = sum[i][j-1] + arr[i][j];
            sum[i][j] = sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1] + arr[i][j];                
        }
    }

    while (M--)
    {
        int x1, y1, x2, y2, ans;
        cin >> x1 >> y1 >> x2 >> y2;

        //ans = 0;
        //for (int i=x1; i<=x2; i++)
        //{
        //    ans += sum[i][y2] - sum[i][y1-1];
        //}
        //cout << ans << '\n';
        cout << sum[x2][y2] - sum[x2][y1-1] - sum[x1-1][y2] + sum[x1-1][y1-1] << '\n';
    }

    return 0;
}