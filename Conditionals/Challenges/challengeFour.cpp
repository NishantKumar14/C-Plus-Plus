#include <iostream>

using namespace std;

int main() {
    int choice;

    cout << "Select the brewing method: \n";
    cout << "1. Boiling Tea \n";
    cout << "2. Steeping Tea \n";
    cout << "3. Iced Tea \n";
    cout << "Enter your brewing method in number: ";
    
    cin >> choice;
    
    switch (choice) {
        case 1:
            cout << "Great, You want hot boiling tea." << endl;
            break;
        case 2:
            cout << "Excellent, You want steeping tea." << endl;
            break;
        case 3:
            cout << "Nice, You want Iced tea." << endl;
            break;
        
        default:
            cout << "Invalid choice." << endl;
            break;
    }
    
    return 0;
}