// if given number is prime or not

#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int i = 2;

    while(i<n) {
        if(n%i==0) {
            cout<< "Not prime" << endl;
            return 0;
        }
        i++;

    }
    cout << "Prime" << endl;
    return 0;


}