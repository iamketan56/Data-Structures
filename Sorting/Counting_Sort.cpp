#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {0, 2, 3, 1, 5, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int arr2[n]; //final array
    int max = *max_element(arr, arr + n);
    int arr1[max + 1] = {0}; // intermediate array

    for (int i = 0; i < n; i++)
    {
        arr1[arr[i]] = arr1[arr[i]] + 1;
    }
    for (int i = 1; i < max + 1; i++)
    {
        arr1[i] = arr1[i - 1] + arr1[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        arr2[arr1[arr[i]] - 1] = arr[i];
        arr1[arr[i]]--;
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
}