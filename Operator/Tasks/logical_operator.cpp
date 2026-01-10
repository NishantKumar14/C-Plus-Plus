#include <iostream>

using namespace std;

int main() {
    int tea_cups;
    bool students;

    cout << "Enter the tea cups, you have ordered: ";
    cin >> tea_cups;

    cout << "Are you a student? (1 for yes, 0 for no): ";
    cin >> students;

    bool discount = (tea_cups >= 15  || students);

    if (discount) {
        cout << "Congratulations! You have received the disount on this tea order." << endl;
    }
    else {
        cout << "No! You have not received any disount." << endl;
    }
    
    return 0;
}