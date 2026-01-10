#include <iostream>
#include <string>

using namespace std;

int main() {
    string favouriteTea;

    cout << "Enter favourite tea type: ";
    getline(cin, favouriteTea);

    if (favouriteTea == "Oolong") {
        cout << "You have excellent taste." << endl;
    }
    else if (favouriteTea == "Lemon Tea" || favouriteTea == "Black Tea") {
        cout << "You want a fresh taste." << endl;
    }
    else {
        cout << "You want strong masala tea." << endl;
    }
    
    return 0;
}