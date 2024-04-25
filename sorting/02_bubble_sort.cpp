//Bubble Sort
//putting the largest to the right, through swapping

#include<vector>
using namespace std;
void bubbleSort(vector<int> &arr, int n){  

    for(int i = 0; i<n-1; i++) {
        //for round 1 to n-1
        bool swapped = false;
        
        for(int j =0; j<n-i-1; j++) {
            
            //process element till n-i th index
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        
        if(swapped == false) {
            //already sorted
            break;
        }   
    }
}





// time complexity O(n2)  (worst case)
// best case time complexity  O(n) __ (if array is already sorted)

// space complexity O(1)

