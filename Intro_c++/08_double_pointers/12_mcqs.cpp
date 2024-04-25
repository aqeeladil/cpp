#include <iostream>
using namespace std;

void sqr(int *p)
{

    *p = (*p) * (*p);
}

int main()
{
    int a = 4;
    sqr(&a);
    cout << a << endl;
}
