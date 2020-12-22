#include <iostream>
#include <algorithm>
using namespace std;
void countsort(int a[], int n, int pos)
{
    int final[n];
    const int max = 10;
    int count[max] = {0};
    for (int i = 0; i < n; i++)
    {
        count[(a[i] / pos) % 10]++;
    }
    for (int i = 1; i < max; i++)
    {
        count[i] = count[i - 1] + count[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        final[count[(a[i] / pos) % 10] - 1] = a[i];
        count[(a[i] / pos) % 10]--;
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = final[i];
    }
}
void radixsort(int a[], int n)
{
    int max = *max_element(a, a + n);
    for (int pos = 1; max / pos > 0; pos *= 10)
    {
        countsort(a, n, pos);
    }
}
void printArray(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}
int main()
{
    int arr[] = {198, 110, 123, 45, 61, 192, 123, 321, 132, 452, 344};
    int n = sizeof(arr) / sizeof(arr[0]);
    radixsort(arr, n);
    printArray(arr, n);
}