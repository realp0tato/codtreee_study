
#include <iostream>
#include <string>
#include <stack>

using namespace std;

string str;
stack<int> s;
int main() {
    cin >> str;

    for(int i = 0; i <str.length(); i++)
    {
        if(str[i] == '(')
        {
            s.push(i);
        }
        else if(str[i] == ')')
        {
            if(!s.empty())
            {
                s.pop();
            }
            else
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    if(s.empty())
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
