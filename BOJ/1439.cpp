//BOJ 1439 - 뒤집기

#include <iostream>

using namespace std;

int main() {
    int cnt = 0; //, ignore_flag = -1;
    string S;
    cin >> S;

    /*
    for (int i=1; i<S.length(); i++)
    {
        if (S[i] != S[i-1])
        {
            if (ignore_flag > 0)
                ignore_flag *= -1;
            else
            {
                cnt++;
                ignore_flag *= -1;
            }
        }
    }
    //cout << cnt; */

    for (int i=1; i<S.length(); i++)
    {
        if (S[i] != S[i-1])
            cnt++;
    }
    cout << (cnt + 1) / 2;

    return 0;
}