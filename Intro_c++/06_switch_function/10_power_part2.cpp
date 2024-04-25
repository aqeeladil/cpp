#include<iostream>
using namespace std;


int power(int num1, int num2){
    int ans = 1;

    for(int i=1; i<=num2; i++){
        ans = ans * num1;
    }

    return ans;
}

int main(){
    
    cout << "answer is " << power(2, 5)<< endl;

    return 0;
}