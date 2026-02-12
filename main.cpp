/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double celsius, fahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 1.8) + 32;

    cout << fixed << setprecision(2);
    cout << celsius << " C = " << fahrenheit << " F" << endl;

    if (celsius < 0) {
        cout << "Freezing!" << endl;
    } else if (celsius > 30) {
        cout << "Hot!" << endl;
    }

    return 0;
}