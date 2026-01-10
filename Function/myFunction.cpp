#include <iostream>
#include <string>

using namespace std;

int checkTemperature(int temperature) {
    return temperature;
}

void makeChai() {
    cout << "Boiling water, adding tea leaves, straning..." << endl;
}

// declartion of function
void serveChai(int cups);

void serveChai(string teaType = "Masala tea") {
    cout << "Serving " << teaType << endl;
}

int main () {
    int temp = checkTemperature(50);
    // std :: cout << temp << endl;

    // serveChai(3);
    // makeChai(); // calling a function

    serveChai("Lemon tea");

    return 0;
}

// defination of function
void serveChai(int cups) {
    cout << "Serving " << cups << " of chai." << endl;
}