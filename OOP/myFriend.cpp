#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Chai {
    private:
        string* teaName;
        int servings;
        
    public:
        Chai(string name, int serve) : teaName(new string(name)), servings(serve) {}

        ~Chai() {
            cout << "Destructor called." << endl; 
        }

        friend bool compareServings(const Chai &chai1, const Chai &chai2);

        void display() const {
            cout << "Tea name: " << *teaName << endl;
            cout << "Servings: " << servings << endl;
        }
};

bool compareServings(const Chai &chai1, const Chai &chai2) {
    return chai1.servings > chai2.servings;
}

int main() {
    Chai masalaChai("Masala chai", 13);
    Chai gingerChai("Ginger chai", 4);

    masalaChai.display();
    gingerChai.display();

    if (compareServings(masalaChai, gingerChai)) {
        cout << "Masala chai is having MORE servings." << endl;
    } else {
        cout << "Masala chai is having lESS servings." << endl;
    }
    
    return 0;
}
