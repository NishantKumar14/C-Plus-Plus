#include <iostream>

using namespace std;

int main () {
    const int Green  = 1;
    const int Black  = 2;
    const int Oolong = 4;

    int stock = Green | Oolong;

    int teaType;

    cout << "Enter tea type (1 = Green, 2 = Black, 4 = Oolong): ";
    cin >> teaType;

    if(stock & teaType) {
        cout << "The selected tea is in STOCK." << endl;
    } else {
        cout << "The selected tea is OUT OF STOCK." << endl;
    }

    return 0;
}