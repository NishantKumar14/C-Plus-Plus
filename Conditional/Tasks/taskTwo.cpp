#include <iostream>

using namespace std;

int main () {
    bool teaShopOpen;
    int hours;

    cout << "Enter the current hours (0-23): ";
    cin >> hours;

    if (hours >= 8 && hours <= 18) {
        cout << "Tea shop is OPEN." << endl;
    }
    else {
        cout << "Tea shop is CLOSED." << endl;
    }
    
    return 0;
}