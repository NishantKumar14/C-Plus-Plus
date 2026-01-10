#include <iostream>

using namespace std;

int main() {
    int tea_cups;

    cout << "Enter the number of tea cups want to order: ";
    cin >> tea_cups;

    if (tea_cups > 20) {
        cout << "Congratulation, You have received the Glodan badge." << endl;
    }
    else if (tea_cups >= 10 && tea_cups <= 20) {
        cout << "Congratulation, You have received Sliver badge." << endl;
    }
    else {
        cout << "Thank you for beign a regular customer." << endl;
    }
    
    return 0;
}