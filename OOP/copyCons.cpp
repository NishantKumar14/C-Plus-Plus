#include <iostream>
#include <vector>

using namespace std;

class Chai {
public:
    string* teaName;
    int servings;
    vector <string> ingredients;

    //copy constructor
    Chai(string name, int serv, vector<string> ingre) {
        teaName = new string(name);
        servings = serv;
        ingredients = ingre;
        cout << "Parameter constructor called." << endl;
    }

    Chai(const Chai& other) {
        teaName = new string(*other.teaName);
        servings = other.servings;
        ingredients = other.ingredients;
        cout << "Copied constructor called." << endl;
    }

    ~Chai() {
        delete teaName;
        cout << "Destructor called." << endl;
    }

    void displayChaiDetails() {
        cout << "Tea Name: " << *teaName << endl;
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
    // lemonTea.displayChaiDetails();

    // copy the object
    Chai copiedChai = lemonTea;
    // copiedChai.displayChaiDetails();

    *lemonTea.teaName = "Modified Lemon Tea";

    cout << "-----Lemon Tea-----" << endl;
    lemonTea.displayChaiDetails();
    cout << "-----Copied Tea-----" << endl;
    copiedChai.displayChaiDetails();

    return 0;
}