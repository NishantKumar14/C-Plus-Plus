#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int number;
    
    cout << "Enter the number for how many different tea types you want: ";
    cin >> number;
    cin.ignore();

    vector<string> teaTypes(number);

    cout << "Enter the different types of tea: ";
    for (int i = 0; i < number; i++) {
        getline(cin, teaTypes[i]);
    }
    
    cout << "Serving tea: ";
    for (int i = 0; i < number; i++) {

        if (teaTypes[i] == "Herbal Tea") {
            cout << "We are skippping " << teaTypes[i] <<  endl;
            continue;
        }
        if(teaTypes[i] == "No Tea") {
            cout << "No Tea encountered. Stopping service.\n";
            break;
        }

        cout << "Serving " << teaTypes[i] << endl;
    }
    
    return 0;
}