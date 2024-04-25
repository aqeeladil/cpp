// SUM FROM 1 TO N NUMBERS

# include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int sum = 0;
    int i = 1;

    while (i < n) {
        sum += i;
        i++;
    }

    cout << "Sum of 1 to n is : " << sum << endl;
}