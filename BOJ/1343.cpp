//BOJ 1343 - 폴리오미노

#include <iostream>

using namespace std;

string board;
int index, cnt;

void changer(int cnt)
{
    if (cnt && (cnt % 4 == 0))
        for (int i = 0; i < cnt; i++)
            board[index - 1 - i] = 'A';
    else if (cnt && (cnt % 2 == 0))
    {
        board[index - 1] = 'B';
        board[index - 2] = 'B';
        for (int i = 2; i < cnt; i++)
            board[index - 1 - i] = 'A';
    }
}

int main() {
    cin >> board;

    bool check=true;
    while(check)
    {
        if(!board[index])
            break;

        if(board[index] == 'X')
            cnt++;
        else if(board[index] == '.')
        {
            if(cnt % 2)
                break;

            changer(cnt);
            cnt=0;
        }
        index++;
    }
    if(!check || cnt % 2)
        cout << -1;
    else
    {
        changer(cnt);
        cout << board;
    }
    return 0;
}