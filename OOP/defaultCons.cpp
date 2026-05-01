#include <iostream>
#include <vector>

using namespace std;

class Chai {
public:
    string teaName;
    int servings;
    vector <string> ingredients;

    //default constructor
    Chai() {
        teaName = "Milk Tea";
        servings = 1;
        ingredients = {"Water", "Milk", "Tea leaves", "Sugar"};
        cout << "Constructor called." << endl;
    }

    void displayChaiDetails() {
        cout << "Tea Name: " << teaName << endl;
        cout << "Serving: " << servings << endl;
        cout << "Ingridients: " ;
        for (string ingridient : ingredients) {
            cout << ingridient << " ";
        }
        cout << endl;
    }
};

int main() {
    Chai defaultChai;

    defaultChai.displayChaiDetails();
    
    return 0;
}