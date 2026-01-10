#include <iostream>

using namespace std;

int main () {
    bool isMember;
    int number_of_cups;

    cout << "Enter the number of cups you have purchased: ";
    cin >> number_of_cups;

    cout << "Atleast, you have purchased subscription for a year(1 for yes and 0 for no): ";
    cin >> isMember;

    double discount = (isMember || number_of_cups > 12);

    if (discount) {
        cout << "Congratulation! You are eligible for discount." << endl;
    } else {
        cout << "No! You are not eligible for discount." << endl;
    }
    
    return 0;
}