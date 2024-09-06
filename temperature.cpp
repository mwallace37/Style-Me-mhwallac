using namespace std;

class Temperature {
private:
    double F;  //degrees Fahrenheit
public:
    /** default constructor for Temperature: sets F to 32
     *
     */
    Temperature() : F(32) {}

    /** get Fahrenheit value
     * @return F
     */
    double getF() const {
        return F;
    }

    /** get Celsius value
     * @return conversion between Fahrenheit and Celsius
     */
    double getC() const {
        return (F-32)*(5.0/9.0);
    }

    /** set Fahrenheit value
     * @param f
     */
    void setF(double f) {
        F = f;
    }

    /** set Celsius value
     * @param c
     */
    void setC(double c) {
        F = (c*(9.0/5.0)+32);
    }
};
