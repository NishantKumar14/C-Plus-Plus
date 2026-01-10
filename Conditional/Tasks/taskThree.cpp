#include <iostream>

using namespace std;

int main () {
    int number_of_tea;
    double price_of_tea, total_price, discount_amount;

    cout << "Enter the number of tea cups purchase: ";
    cin >> number_of_tea;

    cout << "Enter the price of tea: Rs ";
    cin >> price_of_tea;

    total_price = number_of_tea * price_of_tea;

    cout << "Total price of tea: Rs " << total_price << endl;

    if (number_of_tea > 20) {
        discount_amount = (total_price * 0.2);
        total_price -= discount_amount; 
        cout << "Congratulation! You are eligible for discount 20% : Rs " << discount_amount << endl;
        cout << "Total price after discount is : Rs " << total_price << endl;
    }
    else if (number_of_tea >= 10 && number_of_tea <= 20) {
        discount_amount = (total_price * 0.1);
        total_price -= discount_amount;
        cout << "Congratulation! You are eligible for discount 10% : Rs " << discount_amount << endl;
        cout << "Total price after discount is : Rs " << total_price << endl;
    }
    else {
        cout << "No, You are not eligible for discount." << endl;
        cout << "Total price of tea is : Rs " << total_price << endl;
    }
    
    return 0;
}