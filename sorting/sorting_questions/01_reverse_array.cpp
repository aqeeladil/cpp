// Reverse an Array

#include<iostream>
#include<vector>
using namespace std;


vector<int> reverse(vector<int> arr){
    int s = 0;
    int e = arr.size() - 1;

    while(s<=e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    return arr;
}


void print(vector<int> v) {

    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}


int main() {

    vector<int> v;
    v.push_back(56);
    v.push_back(34);
    v.push_back(2);
    v.push_back(8);
    v.push_back(11);
    v.push_back(500);

    vector<int> ans = reverse(v);
    cout << "Printing reverse Array" <<endl;
    print(ans);

    return 0;
}