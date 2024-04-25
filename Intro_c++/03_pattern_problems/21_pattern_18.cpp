# include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int i = 1;

    while (i <= n){
        int j = i;
        int space = 1;

        while(space < i){
            cout << " ";
            space++;
        }
        
        while (j <= n){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}