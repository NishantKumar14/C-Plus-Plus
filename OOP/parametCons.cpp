#include <iostream>
#include <vector>

using namespace std;

class Chai {
public:
    string teaName;
    int servings;
    vector <string> ingredients;

    //parameter constructor
    Chai(string name, int serv, vector<string> ingre) {
        teaName = name;
        servings = serv;
        ingredients = ingre;
        cout << "Parameter constructor called." << endl;
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
    Chai lemonTea("Lemon Tea", 2, {"Lemon", "Water", "Honey"});

    lemonTea.displayChaiDetails();
    return 0;
}