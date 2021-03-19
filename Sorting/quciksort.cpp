#include <iostream>
#include <algorithm>
using namespace std;
int partition(int l, int h, int a[])
{
    int pivot = a[l];
    int i = l;
    int j = h;
    while (i < j)
    {
        do
        {
            i++;
        } while (a[i] <= pivot);
        do
        {
            j--;
        } while (a[j] > pivot);
        if (i < j)
        {
            swap(a[i], a[j]);
        }
        else
        {
            swap(a[l], a[j]);
        }
    }
    return j;
}
void quiksort(int l, int h, int a[])
{
    if (l < h)
    {
        int j = partition(l, h, a);
        quiksort(l, j, a);
        quiksort(j + 1, h, a);
    }
}
int main()
{
    int A[] = {10, 16, 8, 12, 15, 6, 3, 9, 5};
    quiksort(0, 9, A);
    for (int i = 0; i < 9; i++)
    {
        cout << A[i] << " ";
    }
}