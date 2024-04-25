// https://www.codingninjas.com/studio/problems/binary-search_972?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_11


#include<iostream>
#include<vector>
using namespace std;


int solve(int *arr, int s, int e , int k ) {

    //base case

    //element not found
    if(s>e)
        return -1 ;

    int mid = s + (e-s)/2;

    //element found
    if(arr[mid] == k)
        return mid;

    if(arr[mid] < k) {
        return solve(arr, mid+1, e, k);
    }
    else{
        return solve(arr, s, mid-1, k);
    }
}
int search(vector<int> &nums, int target) {

    int ans = solve(nums, 0, nums.size()-1, target)
}