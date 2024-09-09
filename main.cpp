#include <iostream>
#include "temperature.cpp"
using namespace std;

int main() {
    int choice;
    cout << "Enter 1 for Fahrenheit, or another number for Celsius: ";
    cin >> choice;
    while (cin.fail()) { //while cin<=choice
        cin.clear();
        string junk;
        getline(cin, junk);
        cout << "Reenter: ";
        cin >> choice;
    }

    int t;
    cout << "Enter your temperature: ";
    cin >> t;
    while (cin.fail()) {
        cin.clear();
        string junk;
        getline(cin, junk);
        cout << "Reenter: ";
        cin >> t;
    }

    Temperature myTemp;
    //set either C or F to t
    (choice == 1) ? myTemp.setF(t) : myTemp.setC(t);


    //determine temperature category and print
    string a;
    if (myTemp.getC() < 0) {
        a = "Cold";
    } else if (myTemp.getC() > 30) {
        a = "Hot";
    } else {
        a = "Beautiful";
    }
    cout << "Hello, " << a << " World!" << endl;
    return 0;
}