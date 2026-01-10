#include <iostream>

using namespace std;

int helloChai() {
    return 0;
}

int main() {
    // lamda expression 

    auto preparedChai = [] (int cups) {
        cout << "Preparing " << cups << " cups of tea." << endl;
    };

    preparedChai(4);

    return 0;
}