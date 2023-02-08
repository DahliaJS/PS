//BOJ 21921 - 블로그

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    vector<int> visitor;
    int max_visitor = 0;
    int current_visitor = 0;
    vector<int> date_number;
    int max_number = 0;

    for (int i=0; i<N; i++)
    {
        int t;
        cin >> t;
        visitor.push_back(t);
    }

    for (int i=0; i<N; i++)
    {
        if (i < X)
        {
            current_visitor += visitor[i];
            max_visitor = current_visitor;
            date_number.push_back(max_visitor);
        }
        else
        {
            current_visitor += visitor[i];
            current_visitor -= visitor[i-X];
            if (max_visitor <= current_visitor)
            {
                max_visitor = current_visitor;
                date_number.push_back(max_visitor);
            }
        }
    }

    for (int i: date_number)
    {
        if (i == max_visitor)
            max_number++;
    }

    if (max_visitor)
        cout << max_visitor << '\n' << max_number;
    else
        cout << "SAD";

    return 0;
}