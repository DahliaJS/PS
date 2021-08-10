//BOJ 1018 - 체스판 다시 칠하기

#include <iostream>
#include <vector>

using namespace std;

vector<string> board, boardW, boardB;

int main() {
	int N, M;
	cin >> N >> M;

	for (int i=0; i<N; i++) 
	{
		string s;
		cin >> s;
		board.push_back(s);
	}

	string w="WBWBWBWB", b="BWBWBWBW";
	for (int i=0; i<8; i++)
	{
		if (i % 2)
		{
			boardW.push_back(b);
			boardB.push_back(w);
		}
		else
		{
			boardW.push_back(w);
			boardB.push_back(b);
		}
	}

	int cntW, cntB;
	int mn = 1234567;
	for (int i=0; i<N-7; i++)
	{
		for (int j=0; j<M-7; j++)
		{
			cntW=0;
			cntB=0;
			for (int k=0; k<8; k++)
			{
				for (int l=0; l<8; l++)
				{
					if (board[i+k][j+l] != boardW[k][l]) cntW++;
					if (board[i+k][j+l] != boardB[k][l]) cntB++;
				}
			}
			if (mn > cntW) mn = cntW;
			if (mn > cntB) mn = cntB;
		}
	}
	
	cout << mn;

	return 0;
}