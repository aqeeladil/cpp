#include<iostream>
using namespace std;


int main(){

    // static variable is stored in stack
    char ch = 'q';
    char *c = &ch;
    cout << sizeof(ch) << endl;
    cout << sizeof(c) << endl;

    // dynmaic variable is stored in stack + heap 
    int* arr = new int[5];


}