#include <iostream>

using namespace std;

int N;
void reverse_print_num(int n)
{
    if(n == 0)
        return;
    cout << n << " ";
    reverse_print_num(n-1);
    

}
void print_num(int n)
{
    if(n == 0)
        return;
    print_num(n-1);
    cout << n << " ";

}

int main() {
    cin >> N;
    print_num(N);
    cout << endl;
    reverse_print_num(N);


    return 0;
}