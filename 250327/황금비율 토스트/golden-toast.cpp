#include <iostream>
#include <string>
#include <list>

using namespace std;

int n, m;
string s;


int main() {
    list<char> l;
    list<char>::iterator k;
    cin >> n >> m;
    cin >> s;
    
    for (int i = 0; i < n; i++) {
        l.push_back(s[i]);
    }
    k = l.end();

    for (int i = 0; i < m; i++) {
        char command;
        cin >> command;
        if (command == 'P') {
            char c;
            cin >> c;
            l.insert(k, c);
        }
        else if(command == 'L')
        {
            if(k != l.begin())
            {
                k--;
            }
        }
        else if(command == 'D')
        {
            if(k != l.end())
            {
                k = l.erase(k);
            }
        }
        else if(command == 'R')
        {
            if(k != l.end())
            {
                k++;
            }
        }
    }
    for (k = l.begin(); k != l.end(); k++) {
        cout << *k;
    }
    
    return 0;
}
