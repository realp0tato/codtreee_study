#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int arr[100000];

void radix_sort(int k)
{
    vector<int> bucket[10];
    int div = 1;
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            int digit = (arr[j] / div) % 10;
            bucket[digit].push_back(arr[j]);
        }
        int index = 0;
        for (int j = 0; j < 10; j++) {
            for (int l = 0; l < bucket[j].size(); l++) {
                arr[index++] = bucket[j][l];
            }
            bucket[j].clear();
        }
        div *= 10;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

}

int main() {
    cin >> n;
    int max = 0, k = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    while(max > 0)
    {
        max %= 10;
        k++;
    }
    radix_sort(k);
    return 0;
}
