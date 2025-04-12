#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int n;
int arr[100000];

void radix_sort(int k)
{
    //기수 정렬, k는 자릿수
    vector<int> bucket[10]; // 0~9까지의 버킷
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            int digit = (arr[j] / (int)pow(10, i)) % 10; // i번째 자릿수
            bucket[digit].push_back(arr[j]); // 해당 자릿수에 맞는 버킷에 넣기
        }
        int index = 0;
        for (int j = 0; j < 10; j++) {
            for (int l = 0; l < bucket[j].size(); l++) {
                arr[index++] = bucket[j][l]; // 버킷에서 꺼내서 원래 배열에 넣기
            }
            bucket[j].clear(); // 버킷 초기화
        }
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
        max /= 10;
        k++;
    }
    radix_sort(k);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
