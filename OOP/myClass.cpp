#include <iostream>
#include <vector>

using namespace std;

class Chai {
public:
    string teaName;                 // name of the tea
    int serving;                    // number of servings
    vector <string> ingridients;    // list of ingridients for the tea

    // Member function

    void displayChaiDetails() {
        cout << "Tea Name: " << teaName << endl;
        cout << "Serving: " << serving << endl;
        cout << "Ingridients: " ;
        for (string ingridient : ingridients) {
            cout << ingridient << " ";
        }
        cout << endl;
    }
};

int main() {
    Chai chaiOne;

    chaiOne.teaName = "Lemon tea";
    chaiOne.serving = 2;
    chaiOne.ingridients = {"lemon", "water", "tea", "honey", "cardimon"};

    chaiOne.displayChaiDetails();

    Chai chaiTwo;

    chaiTwo.teaName = "Masala Chai";
    chaiTwo.serving = 4;
    chaiTwo.ingridients = {"Water", "Milk", "Ginger", "Tea", "Masala"};

    chaiTwo.displayChaiDetails();

    return 0;
}