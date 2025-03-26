#include <iostream>
#include <vector>
#include <string>


using namespace std;

int n;
vector<int> v;
string s[10000];
int num[10000];

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        if(s[i] == "push_back")
        {
            cin >> num[i];
            v.push_back(num[i]);
        }
        else if(s[i] == "pop_back")
        {
            v.pop_back();
        }
        else if(s[i] == "size")
        {
            cout << v.size() << endl;
        }
        else if(s[i] == "get")
        {
            cin >> num[i];
            cout << v[num[i]-1] << endl;
        }
            
    }
    return 0;

}