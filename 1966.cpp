//BOJ 1966 - 프린터 큐

#include <iostream>
#include <deque>

using namespace std;

void pop(deque<int> &pq, int &target, int &cnt) {
	pq.pop_front();
	cnt++;
	target--;
}

void pass(deque<int> &pq, int &target) {
	//맨 앞이 target일 경우
	if(target == 0) {
		pq.push_back(pq.front());
		pq.pop_front();
		target = pq.size() - 1;
	}
	else {
		pq.push_back(pq.front());
		pq.pop_front();
		target = target - 1;
	}
}

//큐 맨앞이 나머지 우선순위보다 높은지 보고 pop or pass
//front보다 우선순위 높은게 있으면 false
//없으면 true
bool check(deque<int> &pq) {
	bool c = true;

	for(int i=0; i<pq.size(); i++) {
		if(pq.front() < pq.at(i)) {
			c = false;
			break;
		}
	}
	return c;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int tc, N, M, target, cnt;
	deque<int> pq;
	cin >> tc;
	for(int i=0; i<tc; i++) {
		cin >> N >> M;
		target = M;

		cnt = 0;

		for(int j=0; j<N; j++) {
			cin >> M;
			pq.push_back(M);
		}

		while(pq.size()) {
			if(check(pq)) {
				if(target==0) {
					pop(pq, target, cnt);
					break;
				}
				else
					pop(pq, target, cnt);
			}
			else
				pass(pq, target);
		}
		pq.clear();

		cout << cnt << '\n';
	}

	return 0;
}