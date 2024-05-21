#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    for(long long i = left; i <= right; i++)
    {
        if((i/n)+1 > (i%n)+1)
        {
            answer.push_back(i/n+1);
        }
        else
        {
            answer.push_back(i%n+1);
        }
    }
    return answer;
}