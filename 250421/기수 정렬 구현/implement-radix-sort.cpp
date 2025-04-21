#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int n;
int arr[100000];

void radix_sort(int k)
{
    vector<int> bucket[10];
    for(int i = 0; i<k; i++)
    {
        for(int j =0; j<n; j++ )
        {
            int digit = (arr[j]/(int)pow(10,i)) % 10;
            bucket[digit].push_back(arr[j]);
        }
        int index = 0;
        for(int j =0; j<10; j++)
        {
            for(int l = 0; l<bucket[j].size(); l++)
            {
                arr[index] = bucket[j][l];
                index++;
            }
            bucket[j].clear();
        }
    }
}
int main() {
    cin >> n;
    int max_value = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        max_value = max(max_value, arr[i]);
    }
    int count = 0;
    while(max_value != 0)
    {
        max_value /= 10;
        count++;
    }
    radix_sort(count);
    for(int i =0; i<n; i++)
        cout << arr[i] << " ";

    return 0;
}
