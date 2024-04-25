#include<iostream>
#include<vector>
using namespace std;

void mergeSort(int arr1[], int n, int arr2[], int m, int ans[]){
    int i = 0;
    int j = 0;
    int k = 0;

    while(i<n && j<m){
        if(arr1[i] < arr2[j]){
            ans[k] = arr1[i];
            k++;
            i++;
        }
        else{
            ans[k] = arr2[j];
            k++;
            j++;
        }
    }

    //copy first array k element ko
    while(i<n) {
        ans[k] = arr1[i];
        k++;
        i++;
    }

    //copy kardo second array k remaining element ko
    while(j<m) {
        ans[k] = arr1[j];
        k++;
        j++;
    }

}

void print(int ans[], int n) {
    for(int i=0; i<n; i++) {
        cout<< ans[i] <<" ";
    }
    cout << endl;
}


int main(){

    int arr1[5] = {1,3,5,7,9};
    int arr2[3] = {2,4,6};
    int ans[8] = {0};

    mergeSort(arr1, 5, arr2, 3, ans);
    print(ans, 8);
    return 0;
}