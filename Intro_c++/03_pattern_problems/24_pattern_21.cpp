# include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int i = 1;
    int count = 1;

    while (i <= n){
        int j = 1;
        int space = n-i;

        while(space){
            cout << "  ";     //notice two spaces
            space--;
        }

        while (j <= i){
            cout << count << " ";    //notice one space
            count++; 
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}