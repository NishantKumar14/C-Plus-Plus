#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string days[7] = {
        "Monday", 
        "Tuesday", 
        "Wednesday", 
        "Thrusday", 
        "Friday", 
        "Saturday", 
        "Sunday"
    };

    string meal[3] = {
        "breakfast",
        "lunch", 
        "dinner"
    };

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "On " << days[i] << " during " << meal[j] << " , we need 2 cups of tea." << endl;

            for (int k = 1; k <= 2; k++) {
                cout << " Here is cup " << k << " of tea." << endl;
            }
        }
        cout << endl;
    }
    
    return 0;
}