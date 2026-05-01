#include <iostream>
#include <vector>

using namespace std;

class Chai {
    private:
        string teaName;
        int servings;
        vector <string> ingredients;
    
    public:
        Chai() {
            teaName = "Unknow tea";
            servings = 5;
            ingredients = {"Water", "Tea leaves"};
        }

        Chai(string name, int serve, vector <string> ingredient) {
            teaName = name;
            servings = serve;
            ingredients = ingredient;
        }

        // getter for teaName
        string getTeaName() {
            return teaName;
        }

        // setter for teaName
        void setTeaName(string name) {
            // we can write here logic as per our requirement.
            teaName = name;
        }

        // getter for servings
        int getServings() {
            return servings;
        }

        // setter for servings
        void setServings(int serve) {
            servings = serve;
        }

        // getter for ingredients
        vector <string> getIngredients() {
            return ingredients;
        }

        // setter for ingredients
        void setIngredients(vector <string> ingredient) {
            ingredients = ingredient;
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
    Chai chai;

    chai.setTeaName("Ginger tea");
    chai.setServings(5);
    chai.setIngredients({"Water", "Ginger", "Tea leaves"});
    chai.displayChaiDetails();
    return 0;
}
