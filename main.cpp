#include <iostream>

using namespace std;

//main method
int main()
{
    //declare variables
    string w1, w2, w3;
    string backwards = " spelled backward is: ";

    // ask user for random word
    cout << "Please input a random word, then press enter." << endl;
    cin >> w1;
    cout << "You entered: " << w1 << endl;
    cout << w1 << backwards;
    // loop through the char array backwards, and print
    for (int i = w1.length() - 1; i >= 0; i--)
        cout << w1[i];

    // repeat steps for words 2, and 3
    cout << "\n\nPlease input a random word, then press enter." << endl;
    cin >> w2;
    cout << "You entered: " << w2 << endl;
    cout << w2 << backwards;
    for (int i = w2.length() - 1; i >= 0; i--)
        cout << w2[i];

    cout << "\n\nPlease input a random word, then press enter." << endl;
    cin >> w3;
    cout << "You entered: " << w3 << endl;
    cout << w3 << backwards;
    for (int i = w3.length() - 1; i >= 0; i--)
        cout << w3[i];

    cout << "\n\n" << endl;

    return 0;
}