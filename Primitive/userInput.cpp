#include <iostream>
#include <string>

using namespace std;

void displayFavouriteTea(int teaQuntity, string favouriteTea) {
    cout << "Quantity of favourite tea: " << teaQuntity << "\nFavourite tea: " << favouriteTea << endl; 
}

int main() {
    
    string favouriteTea;
    int teaQuantity;

    cout << "What would you like to order in tea? ";
    getline(cin, favouriteTea);

    // ask for quantity
    cout << "How many cups of " << favouriteTea << "would you like to have ? ";
    cin >> teaQuantity;

    displayFavouriteTea(teaQuantity, favouriteTea);

    return 0;
}
