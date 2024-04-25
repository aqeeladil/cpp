// find the element at the peak of mountain

#include<iostream>
using namespace std;


int findpeak(int arr[], int n){
    int s=0;
    int e= n-1;

    int mid = (s+e)/2;

    while(s<e){

        if (arr[mid] < arr[mid+1]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = (s + e)/2;

    }
    return s;


}

int main(){
    int my_array[4] = {0,2,1,0};
    int new_array[4] = {3,4,5,1};

    cout << "The peak of 1st array is "<< findpeak(my_array, 4) << endl;
    cout << "The peak of 2nd array is "<< findpeak(new_array, 4) << endl;

}