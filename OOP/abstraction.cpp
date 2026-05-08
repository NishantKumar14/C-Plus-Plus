#include <iostream>
#include <string>

using namespace std;

class Tea{
    public:
        virtual void prepareIngridients() = 0; // pure virtual function
        virtual void brew() = 0;
        virtual void serve() = 0;

        void makeTea() {
            prepareIngridients();
            brew();
            serve();
        }
};

class GreenTea : public Tea {
    public:
        void prepareIngridients() override {
            cout << "Green tea is preparing along with water and leaves." << endl;
        }
        void brew() override {
            cout << "Green tea brewed." << endl;
        }
        void serve() override {
            cout << "Green tea served." << endl;
        }
};

class MasalaTea : public Tea {
    public:
        void prepareIngridients() override {
            cout << "Green tea is preparing along with water, leaves and masala." << endl;
        }
        void brew() override {
            cout << "Masala tea brewed." << endl;
        }
        void serve() override {
            cout << "Masala tea served." << endl;
        }
};

int main() {

    GreenTea greenTea;
    MasalaTea masalaTea;

    greenTea.makeTea();
    masalaTea.makeTea();

    return 0;
}