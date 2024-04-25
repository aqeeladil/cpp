#include <iostream>
using namespace std;

// case 1
//  in static variable memory is automatically cleared
while (true)
{
    int i = 5;
}

// case 2
// in dynamic variable memory is  cleared manually using delete keyword
while (true)
{
    int *ptr = new int;
}