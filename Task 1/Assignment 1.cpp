#include <iostream>
using namespace std;

int main() {
    double readings[10];
    double total = 0;
    double maximum, minimum;
    int below20 = 0;
    int above100 = 0;


    cout << "Enter 10 distance readings:\n";


    for (int i = 0; i < 10; i++) {
        cout << "Reading " << i + 1 << ": ";
        cin >> readings[i];
    }


    maximum = readings[0];
    minimum = readings[0];


    for (int i = 0; i < 10; i++) {
        total = total + readings[i];


        if (readings[i] > maximum) {
            maximum = readings[i];
        }


        if (readings[i] < minimum) {
            minimum = readings[i];
        }


        if (readings[i] < 20) {
            below20++;
        }


        if (readings[i] > 100) {
            above100++;
        }
    }


    double average = total / 10;


    cout << "\nMaximum reading: " << maximum << "\n";
    cout << "Minimum reading: " << minimum << "\n";
    cout << "Average reading: " << average << "\n";
    cout << "Readings below 20 cm: " << below20 << "\n";
    cout << "Readings above 100 cm: " << above100 << "\n";


    return 0;
}
