#include <iostream>
#include <vector>
using namespace std;

// Search in rotated Sorted Array - Standard Binary search
int searchInRotatedSortedArray(vector<int> vec, int tar)
{
    int st = 0, end = vec.size() - 1;
    int mid;
    while (st <= end)
    {
        mid = st + (end - st) / 2;
        if (vec[mid] == tar)
        {
            return mid;
        }
        if (vec[st] <= vec[mid])
        {
            if (vec[st] <= tar && tar <= vec[mid])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        else
        {
            if (vec[mid] <= tar && tar <= vec[end])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

// Peak Index in Mountain Array - Standard Binary Search
int peakIndexInMountainArray(vector<int> vec)
{
    int st = 1, end = vec.size() - 2;
    int mid;
    while (st <= end)
    {
        mid = st + (end - st) / 2;
        if (vec[mid - 1] < vec[mid] && vec[mid] > vec[mid + 1])
        {
            return mid;
        }
        else if (vec[mid - 1] < vec[mid])
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> vec = {3, 4, 5, 6, 7, 0, 1, 2};
    cout << searchInRotatedSortedArray(vec, 2) << endl;
    vector<int> vec2 = {0, 3, 8, 9, 5, 2};
    cout << peakIndexInMountainArray(vec2) << endl;

    return 0;
}