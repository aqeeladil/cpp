# include <iostream>
using namespace std;

int main() {

    char a;
    cin >> a;

    if (a>='A' && a<='Z') {
        cout << "a is uppercase character" << endl;
    }

    else if (a>='a' && a<='z') {
        cout << "a is lowercase character" << endl;
    }
    else if (a>='0' && a<='9') {
        cout << "a is a digit" << endl;
    }
    else {
        cout << "mje to ni pta" << endl;
    }
}