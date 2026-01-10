#include <iostream>
#include <string>

using namespace std;

int main() {
    string response;

    while (true) {
        cout << "Do you want more tea (type 'stop' to exit)?:  ";
        getline(cin, response);

        if (response == "stop" || response == "Stop") {
            break;
        }
        
        cout << "Here is your another cup of tea." << endl;
    }
    
    cout << "No more tea will served to you." << endl;

    return 0;
}