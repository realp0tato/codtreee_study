#include <iostream>
#include <string>
#include <queue>

using namespace std;

int N, K;
int a;

int main() {
    cin >> N >> K;
    queue<int> q;
    for(int i = 1; i<=N; i++)
    {
        q.push(i);
    }
    while(q.size() != 0)
    {
        for(int i = 0; i < K-1; i++)
        {
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
