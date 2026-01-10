#include <iostream>

using namespace std;

int main() {
    int number_of_cups;
    double price_of_tea, total;

    cout << "Enter the number of cups: ";
    cin >> number_of_cups;

    cout << "Enter the price of tea: ";
    cin >> price_of_tea;

    total = number_of_cups * price_of_tea;
    
    double discount = 5.0/100;
    double discount_amount = discount * total;

    // cout << discount_amount << endl;

    if (total >= 100) {
        double new_total = total - discount_amount;
        cout << "Congratulation, You got '5%' discount: " << discount_amount << endl;
        cout << "Total price: " << total << endl;
        cout << "Total price after discount: " << new_total << endl;
    } else {
        cout << "Total price: " << total << endl;
    }
    
    return 0;
}