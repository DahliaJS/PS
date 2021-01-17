//BOJ 1018 - 체스판 다시 칠하기 틀림

#include <iostream>
#include <vector>

using namespace std;

bool isOdd(int n) {
	return n%2 ? true : false;
}

//8x8 board를 매개변수로 받고 칠해야하는 개수 세기
int count(vector<string> &board) {
	int cnt=0;

	if(board[0][0] == 'W') {
		for(int i=0; i<board.size(); i++) {
			for(int j=0; j<board[i].size(); j++) {
				if(!isOdd(i) && !isOdd(j) && board[i][j] != 'W') cnt++;
				else if(!isOdd(i) && isOdd(j) && board[i][j] != 'B') cnt++;
				else if(isOdd(i) && !isOdd(j) && board[i][j] != 'B') cnt++;
				else if(isOdd(i) && isOdd(j) && board[i][j] != 'W') cnt++;
			}
		}
	}
	else {
		for(int i=0; i<board.size(); i++) {
			for(int j=0; j<board[i].size(); j++) {
				if(!isOdd(i) && !isOdd(j) && board[i][j] != 'B') cnt++;
				else if(!isOdd(i) && isOdd(j) && board[i][j] != 'W') cnt++;
				else if(isOdd(i) && !isOdd(j) && board[i][j] != 'W') cnt++;
				else if(isOdd(i) && isOdd(j) && board[i][j] != 'B') cnt++;
			}
		}
	}

	return cnt;
}

//8x8로 잘라내기
void selectBoard(vector<string> &board, vector<string> &board64, int N, int M) {
	string s;
	vector<string> temp;
	//세로 다 추가
	for(int i=0; i<8; i++) {
		temp.push_back(board[N+i]);
		//가로 8개
		s = "";
		for(int j=M; j<M+8; j++) {
			s += temp[i][j];
		}
		board64.push_back(s);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N, M;
	cin >> N >> M;

	//입력
	vector<string> board;
	string s;
	for(int i=0; i<N; i++) {
		cin >> s;
		board.push_back(s);
	}

	vector<string> board64;
	int min = 100;

	for(int i=0; i<N-7; i++) {
		for(int j=0; j<M-7; j++) {
			selectBoard(board, board64, i, j);
			if(min > count(board64))
				min = count(board64);

			board64.clear();
		}
	}
	cout << min;

	return 0;
}