#include <iostream>
#include <list>
#include <string>

using namespace std;
int n;
string s[10000];
int num[10000];
list<int> v;

int main()
{
    cin >> n;
    for(int i =0; i < n ; i++)
    {
        cin >> s[i];
        if(s[i] == "push_back")
        {
            cin >> num[i];
            v.push_back(num[i]);
        }
        else if(s[i] == "push_front")
        {
            cin >> num[i];
            v.push_front(num[i]);
        }
        else if(s[i] == "pop_front")
        {
            cout << v.front() << endl;
            v.pop_front();
        }
        else if(s[i] == "pop_back")
        {
            cout << v.back() << endl;
            v.pop_back();
        }
        else if(s[i] == "size")
        {
            cout << v.size() << endl;
        }
        else if(s[i] == "empty")
        {
            cout << v.empty() << endl;
        }
        else if(s[i] == "front")
        {
            cout << v.front() << endl;
        }
        else if(s[i] == "back")
        {
            cout << v.back() << endl;
        }
    }

    return 0;
}