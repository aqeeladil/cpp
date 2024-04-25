// https://leetcode.com/problems/search-in-rotated-sorted-array/description/

// leetcode - 33. Search in Rotated Sorted Array

#include <vector>
using namespace std;

class Solution
{
public:
    int getPivot(vector<int> &arr)
    {

        int s = 0;
        int e = arr.size() - 1;
        int mid = s + (e - s) / 2;

        while (s < e)
        {

            if (arr[mid] >= arr[0])
            {
                s = mid + 1;
            }
            else
            {
                e = mid;
            }
            mid = s + (e - s) / 2;
        }
        return s;
    }

    int binarySearch(vector<int> &arr, int s, int e, int key)
    {

        int start = s;
        int end = e;

        int mid = start + (end - start) / 2;

        while (start <= end)
        {

            if (arr[mid] == key)
            {
                return mid;
            }

            // go to right wala part
            if (key > arr[mid])
            {
                start = mid + 1;
            }
            else
            { // key < arr[mid]
                end = mid - 1;
            }

            mid = start + (end - start) / 2;
        }

        return -1;
    }

    int search(vector<int> &nums, int target)
    {
        int pivot = getPivot(nums);
        if (target >= nums[pivot] && target <= (nums[nums.size()-1]))
        { // BS on second line
            return binarySearch(nums, pivot, nums.size()-1, target);
        }
        else
        { // BS on first line
            return binarySearch(nums, 0, pivot - 1, target);
        }
    }
};