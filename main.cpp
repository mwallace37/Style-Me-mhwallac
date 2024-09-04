#include <iostream>
using namespace std;

class Temperature {
private:
    double F;  //degrees Fahrenheit
public:
//    Temperature() : F(32) {}

    /** get Fahrenheit value
     * @return F
     */
    double getF() const {
        return F;
    }

    /** set Fahrenheit value
     * @param f
     */
    void setF(double f){
        F = f;
    }

    /** get Celsius value
     * @return
     */
    double getC() const {
    return (F-32)*(5.0/9.0);
    }

    /** set Celsius value
     * @param c
     */
    void setC(double c) {
        F=(c*(9.0/5.0)+32);
    }
};

int main() {
    int choice = 0;//create int choice, set as 0
    while (!(cin >> choice)) { //while cin<=choice
        cin.clear();
        string junk;
        getline(cin, junk);
    }

    int t = 0;//create int t, set t to 0
    while (!(cin >> t)) {
        cin.clear();
        string junk;
        getline(cin, junk);
    }

    Temperature myTemp;
    (choice == 1) ? myTemp.setF(t) : myTemp.setC(t);
    if (choice == 1)
        myTemp.setF(t);
    else
        myTemp.setC(t);

    //determine temperature and print
    string a;
    if (myTemp.getC() < 0)
        a="cold";
    else if (myTemp.getC() > 30)
        a="hot";
    else
        a="beautiful";
    cout << "Hello, " << a << " World!" << endl;
    return 0;
}