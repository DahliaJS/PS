//BOJ 2798 - 블랙잭

#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
	int N, M, tmp;
	cin >> N >> M;

	vector<int> v;
	for(int i=0; i<N; i++) {
		cin >> tmp;
		v.push_back(tmp);
	}

	set<int> s;
	int sumi, sumj, sumk;
	for(int i=0; i<v.size()-2; i++) {
		sumi = v[i];
		for(int j=i+1; j<v.size()-1; j++) {
			sumj = sumi + v[j];
			if(sumj > M) continue;
			for(int k=j+1; k<v.size(); k++) {
				sumk = sumj + v[k];
				if(sumk > M) continue;
				else
					s.insert(sumk);
			}
		}
	}
	cout << *(s.rbegin());
	return 0;
}