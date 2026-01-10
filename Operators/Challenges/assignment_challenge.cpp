#include <iostream>

using namespace std;

int main () {
    int number_of_teaBags;

    cout << "Enter the number of tea bags, you have: ";
    cin >> number_of_teaBags;

    if (number_of_teaBags < 20) {
        number_of_teaBags += 10;
    }

    cout << "Total number of tea bags, you have: " << number_of_teaBags << endl;

    return 0;
}