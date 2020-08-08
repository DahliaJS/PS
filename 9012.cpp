//BOJ 9012 - 괄호

#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<string> v;
    string s;
    int N;
    cin >> N;

    for(int i=0; i<N; i++) {
        cin >> s;
        v.push_back(s);
    }

    vector<bool> stack;
    for(int i=0; i<N; i++) {
        for(int j=0; j<v[i].size(); j++) {
            if(v[i][j] == '(')
                stack.push_back(true);
                else {
                    if(stack.empty()) {
                        stack.push_back(false);
                        break;
                    }
                    else 
                        stack.pop_back();
                }
        }
        if(stack.empty())
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
        stack.clear();
    }
    return 0;
}