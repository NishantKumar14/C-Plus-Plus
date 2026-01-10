#include <iostream>
#include <string>

using namespace std;

int main() {
    int temperature;

    cout << "Enter the temperature in degree Celcius: ";
    cin >> temperature;

    if (temperature > 100) {
        cout << "Too hot." << endl;
    }
    else if (temperature >= 80 && temperature <= 100) {
        cout << "Perfect temperature." << endl;
    }
    else {
        cout << "Too Cold" << endl;
    }
    
    return 0;
}