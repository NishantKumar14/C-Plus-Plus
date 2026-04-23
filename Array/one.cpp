#include <iostream>

using namespace std;

int main() {
    int time;       // time should be in between 1 to 12.
    cin >> time;

    int count = 0;

    int num; 
    cin >> num;

    int LaptopLevel[num];       // Number of latop should be in between 1 to 10.

    for (int i = 0; i < num; i++) {
        cin >> LaptopLevel[i];
    }

    for (int i = 0; i < num; i++) {
        if (time <= LaptopLevel[i]) {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}

// int chaiTemperature[5] = {85, 90, 88, 92, 89};

// cout << "Chai temperature : " ;
// for (int i = 0; i < 5; i++) {
//     cout << chaiTemperature[i] << " degree C\n";
// }