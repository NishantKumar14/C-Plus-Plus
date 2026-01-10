#include <iostream>

using namespace std;

int main() {
    int teaBag;

    cout << "Enter the number of bags: " ;
    cin >> teaBag;

    while (teaBag > 0) {
        cout << teaBag << " tea bag left." << endl;
        teaBag--;
    }
    cout << "No more tea left." << endl;

    return 0;
}