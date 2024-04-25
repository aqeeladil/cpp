#include<iostream>
using namespace std;


long long int sqrtInteger (int n) {
    int s = 0;
    int e = n;
    long long int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){

        if ((mid*mid) == n){
            return mid;

        }
        if ((mid*mid) < n){
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}


int main(){
    int n;
    cout << "Enter the number " << endl;
    cin >> n;

    int my_sqrt = sqrtInteger(n);
    cout << "The answer is " << my_sqrt << endl;
}