#include <iostream>
#include <string>

using namespace std;

int main() {
    int table;

    cout << "Enter the number of which you want first 10 multiples of: ";
    cin >> table;
    
    for (int i = 1; i <= 10; i++) {
        cout << table << " x " << i << " = " <<  i * table << endl;
    }   

    return 0;
}