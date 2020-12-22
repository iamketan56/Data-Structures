#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partion(int A[], int l, int h)
{
    int pivot = A[h];
    int pindex = l;
    for (int i = l; i < h; i++)
    {
        if (A[i] <= pivot)
        {
            swap(A[i])
        }
    }
}
int main()
{
    int A[] = {10, 16, 8, 12, 15, 6, 3, 9, 5};
    cout << partion(A, 0, 9);
}