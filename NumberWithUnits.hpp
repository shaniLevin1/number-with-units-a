#include <string>
using namespace std;
namespace ariel{

    class NumberWithUnits{
        private:
            string units;
            double num;

        public:
            NumberWithUnits(){
                units="";
                num=0.0;
            }
            NumberWithUnits(double num,string units){
                this->units=units;
                this->num=num;
            }
            static void read_units(ifstream& units_file);
            friend NumberWithUnits operator+(const NumberWithUnits& a, const NumberWithUnits& b);
            friend NumberWithUnits operator+(const NumberWithUnits& a, double b);
            friend NumberWithUnits operator+=(NumberWithUnits& a, const NumberWithUnits& b);
            friend NumberWithUnits operator-(const NumberWithUnits& a, const NumberWithUnits& b);
            friend NumberWithUnits operator-(const NumberWithUnits& a);
            friend NumberWithUnits operator-=(NumberWithUnits& a, const NumberWithUnits& b);
            friend NumberWithUnits operator++(NumberWithUnits& a);
            friend NumberWithUnits operator++(NumberWithUnits& a,int);
            friend NumberWithUnits operator--(NumberWithUnits& a);
            friend NumberWithUnits operator--(NumberWithUnits& a,int);
            friend NumberWithUnits operator*(NumberWithUnits& a, double b);
            friend NumberWithUnits operator*(double a, NumberWithUnits& b);
            friend NumberWithUnits operator*=(NumberWithUnits& a, double b);
            friend NumberWithUnits operator*=(double a, NumberWithUnits& b);
            friend bool operator>(const NumberWithUnits& a, const NumberWithUnits& b);
            friend bool operator>=(const NumberWithUnits& a, const NumberWithUnits& b);
            friend bool operator<(const NumberWithUnits& a, const NumberWithUnits& b);
            friend bool operator<=(const NumberWithUnits& a, const NumberWithUnits& b);
            friend bool operator==(const NumberWithUnits& a, const NumberWithUnits& b);
            friend bool operator!=(const NumberWithUnits& a, const NumberWithUnits& b);
            friend ostream& operator<<(ostream& out, const NumberWithUnits& a);
            friend istream& operator>>(istream& in, NumberWithUnits& a);

    };
}