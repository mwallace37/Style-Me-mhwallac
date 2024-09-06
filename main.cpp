#include <iostream>
#include "temperature.cpp"
using namespace std;

int main() {
    int choice;//create int choice, set as 0
    cout << "Enter 1 for Fahrenheit, or another number for Celsius: ";
    cin >> choice;
    while (cin.fail()) { //while cin<=choice
        cin.clear();
        cout << "";
        cin >> choice;
        //string junk;
        //getline(cin, junk);
    }

    int t;//create int t, set t to 0
    cout << "Enter your temperature: ";
    cin >> t;
    while (cin.fail()) {
        cin.clear();
        cin >> t;
        // string junk;
        // getline(cin, junk);
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