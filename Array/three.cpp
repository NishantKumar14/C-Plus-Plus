#include <iostream>
using namespace std;

int totalChaiServed(int chai[], int size) {
    int total = 0;
    
    for (int i = 0; i < size; i++) {
        total = total + chai[i];
    }
    
    return total;
}

int main() {
    int chaiServed[7] = {40, 50, 60, 80, 99, 78, 98};

    int total = totalChaiServed(chaiServed, 7);

    cout << "Total chai served: " << total << endl;

    return 0;
}