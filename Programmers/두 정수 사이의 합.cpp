//Programmers - 두 정수 사이의 합

#include <iostream>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;

    if(a>b)
    {
        for(int i=b; i<=a; i++)
        {
            answer += i;
        }
    }
    else
    {
        for(int i=a; i<=b; i++)
        {
            answer += i;
        }
    }

    return answer;
}

int main() {
    
    cout << solution(5, 3);

    return 0;
}