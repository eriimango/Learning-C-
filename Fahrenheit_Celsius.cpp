/** This program will convert temp from fahrenheit to celsius and display convergion
 * Author: Ericka H.
 */
#include <iostream>
using namespace std;

int main() {
    double temp_f; //variables for diff temps using doubles
    double temp_c;

    //prompts users to enter temp in fahrenheit
    cout << "Enter temperature in fahrenheit: \n";
    cin >>  temp_f;

//equation to convert
    temp_c = (temp_f - 32.0) * 5.0 / 9.0;

//print conversion of celsius
    cout << "Temperature in celsius is: " << temp_c;

    return 0;
}
