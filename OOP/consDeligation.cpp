#include <iostream>
#include <vector>

using namespace std;

class Chai {
    public:
        string teaName;
        int servings;
        vector <string> ingredients;

        // deligating constructor
        Chai(string name) : Chai(name, 1, {"Water", "Tea leaves"}) {}

        // main constructor
        Chai(string name, int serve, vector <string> ingredient) {
            teaName = name;
            servings = serve;
            ingredients = ingredient;

            cout << "Main constructor called!" << endl;
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
    Chai quickChai("Quick chai");
    quickChai.displayChaiDetails();
    return 0;
}