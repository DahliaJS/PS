//BOJ 2751 - 수 정렬하기 2

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N, t;
	cin >> N;
	vector<int> v;
	for(int i=0; i<N; i++) {
		cin >> t;
		v.push_back(t);
	}
	sort(v.begin(), v.end());

	for(int i=0; i<v.size(); i++)
		cout << v[i] << '\n';

	return 0;
}