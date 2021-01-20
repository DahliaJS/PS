//BOJ 

#include <iostream>
#include <set>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    multimap<int, int> m;
    m.insert(pair<int, int>(3, 6));
    m.insert(pair<int, int>(5, 8));
    multimap<int, int>::iterator iter;
    iter = m.lower_bound(9);
    if(iter == m.end()) cout << "oh";

    
    

    return 0;
}