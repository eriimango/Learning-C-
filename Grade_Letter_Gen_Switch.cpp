/** this program will prompt user to enter a grade and give message based on grade
 * using a switch statement
 * Author: Ericka H.
 */
#include <iostream>
using namespace std;

int main() {
    int grade;

    //prompts user to enter a grade
    cout << "Enter a grade: " << endl;
    cin >> grade;

    //nested statements based on grade conditions; displays message based on given grade
    switch (grade) {
        case 90 ... 100: cout << "Great job on the A!\n";
        break;

        case 80 ... 89: cout << "You earned a B. Keep up the good work!\n";
        break;

        case 70 ... 79: cout << "You received a C. Needs some work.\n";
        break;

        case 0 ... 69: cout << "You received a F. You have to retake the class.\n";
        break;

        default: cout << "number out of bounds\n";
        break;

        }
    return 0;
}
