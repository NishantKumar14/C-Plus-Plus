#include <iostream>
#include <string>

using namespace std;

int main() {
    string sugar;

    do
    {
        cout << "Do you want to add more sugar to your tea ('enough' to stop)? ";
        getline(cin, sugar);
    } while (sugar != "enough");
    
    return 0;
}