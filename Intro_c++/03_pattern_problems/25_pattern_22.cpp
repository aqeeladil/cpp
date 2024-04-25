# include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int i = 1;

    while (i <= n){
        int j = 1;
        int space = n-i;

        while(space){
            cout << "  ";     //notice two spaces
            space--;
        }

        while(j <= i){
            cout << j << " ";    //notice one space
            j++;
        }

        j = i - 1;
        while (j >= 1){  
            cout << j << " ";      //notice one space
            j--;
        }

        cout << endl;
        i++;
    }
    return 0;
}