// SUM FROM 1 TO N EVEN NUMBERS

# include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int sum = 0;
    int i = 2;

    while (i < n) {
        if ((i%2)==0) {
            sum += i;
        }  
        i++;
    }

    cout << "The sum of 1 to n even numbers is : " << sum << endl;
}