//BOJ 4949 - 균형잡힌 세상 x

#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base:: sync_with_stdio(false);
    cin.tie(0);

    vector<string> v;
    string tmp;
    
    while(true) {
        getline(cin, tmp, '.');
        if(tmp.size() == 1) break;
        v.push_back(tmp);
    }

    vector<int> stack;
    bool yesORno;
    for(int i=0; i<v.size(); i++) {
        yesORno = true;
        for(int j=0; j<v[i].size(); j++) {
            if(v[i][j] == '(') stack.push_back(1);
            else if(v[i][j] == '[') stack.push_back(2);

            else if(v[i][j] == ')') {
                if(*stack.rbegin() == 1) stack.pop_back();
                else {
                    yesORno = false;
                    break;
                }
            }
            else if(v[i][j] == ']') {
                if(*stack.rbegin() == 2) stack.pop_back();
                else {
                    yesORno = false;
                    break;
                }
            }
        }
        stack.clear();
        if(yesORno) cout << "yes" << '\n';
        else cout << "no" << '\n';
    }

    return 0;
}