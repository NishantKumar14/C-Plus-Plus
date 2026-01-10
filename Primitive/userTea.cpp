#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string teaType;
    float priceOfTea;
    char teaReaview;
    
    cout << "Enter type of tea: ";
    getline(cin, teaType);
    
    cout << "Price of tea is ";
    cin >> priceOfTea;
    
    // A represent best tea and E represent worst tea.
    cout << "Enter the tea review- A, B, C, D, E : ";
    cin >> teaReaview;
    
    float increasedTeaPrice = priceOfTea * 0.10; 
    
    int totalPrice = (int) (increasedTeaPrice + priceOfTea);
    
    cout << "Order tea: " << teaType << "\nPrice of tea is " << priceOfTea << "\nNew price after incriment: " << totalPrice << "\nAnd review of tea- A, B, C, D, E: " << teaReaview << endl;
    
    return 0;
}