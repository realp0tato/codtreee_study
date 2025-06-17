#include <iostream>
#include <string>
#include <stack>

using namespace std;

string str;

int main() {
    cin >> str;
    stack<char> s;
    for(int i = 0; i<str.size(); i++)
    {
        if(str[i] == '(')
            s.push(str[i]);
        else
        {
            if(s.empty())
            {
                cout << "No";
                return 0;
            }
            s.pop();
        }
    }
    if(s.empty())
        cout << "Yes";
    else
        cout << "No";
    // Please write your code here.

    return 0;
}
