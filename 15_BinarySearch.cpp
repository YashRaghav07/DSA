#include <iostream>
using namespace std;

// Binary search
// Iterative approach T.C=O(logn)  S.C=O(1)
int binarySearch(int arr[], int tar, int n)
{
    int st = 0;
    int end = n - 1;
    int mid;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (tar > arr[mid])
        {
            st = mid + 1;
        }
        else if (tar < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
// Recursive approach  T.C=O(logn)  S.C=O(logn)
int binarySearch2(int arr[], int tar, int st, int end)
{
    if (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (tar > arr[mid])
        {
            return binarySearch2(arr, tar, mid + 1, end);
        }
        else if (tar < arr[mid])
        {
            return binarySearch2(arr, tar, st, mid - 1);
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {-1, 0, 3, 4, 5, 9, 12};
    cout << binarySearch(arr, 9, sizeof(arr) - 1) << endl;

    return 0;
}