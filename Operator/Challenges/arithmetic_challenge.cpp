#include <iostream>

using namespace std;

int main () {
    int number_tea_packs;
    double price_of_tea, tax_on_tea, total_price;

    cout << "Enter the number of tea packs you want: ";
    cin >> number_tea_packs;

    cout << "The price of tea pack: ";
    cin >> price_of_tea;

    total_price = number_tea_packs * price_of_tea;

    tax_on_tea = 10.0 / 100;

    double total_tax_price = tax_on_tea * total_price;

    total_price = total_price + total_tax_price;

    cout << "The total tax price: " << total_tax_price << endl;
    cout << "The total price of tea including tax: " << total_price << endl;

    return 0;
}