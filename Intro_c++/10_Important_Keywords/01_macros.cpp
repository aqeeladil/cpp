// https://www.geeksforgeeks.org/macros-and-its-types-in-c-cpp/

#include<iostream> 
using namespace std;

#define PI 3.14

int main() {

    int r = 5;
    
    //double pi = 3.14;
    double area = PI * r * r;

    cout << "Area is " << area << endl;

    return 0;
}

