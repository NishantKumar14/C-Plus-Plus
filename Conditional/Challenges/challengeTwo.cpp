#include <iostream>

using namespace std;

int main() {
    int age;

    cout << "Enter your age to buy to tea: ";
    cin >> age;

    if (age >= 18) {
        cout << "Great, You are eligible to purchase tea." << endl;
    } else {
        cout << "You are too young to purchase tea." << endl;  
    }
    
    return 0;
}