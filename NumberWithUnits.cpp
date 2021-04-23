#include <iostream>
#include <fstream>
// #include <sstream>
#include "NumberWithUnits.hpp"
using namespace std;

namespace ariel {
    void NumberWithUnits::read_units(ifstream& units_file){
    }

    ostream& operator<<(ostream& out, const NumberWithUnits& a){
        return out;
    }
    istream& operator>>(istream& in, NumberWithUnits& a){
        return in;
    }
    NumberWithUnits operator+(const NumberWithUnits& a, const NumberWithUnits& b) {
        return a;
    }
    NumberWithUnits operator+(const NumberWithUnits& a, double b) {
        return a;
    }
    NumberWithUnits operator+=(NumberWithUnits& a, const NumberWithUnits& b) {
        return a;
    }
    NumberWithUnits operator-(const NumberWithUnits& a, const NumberWithUnits& b) {
        return a;
    }
    NumberWithUnits operator-(const NumberWithUnits& a) {
        return a;
    }
    NumberWithUnits operator-=(NumberWithUnits& a, const NumberWithUnits& b) {
        return a;
    }
    NumberWithUnits operator++(NumberWithUnits& a) {
        return a;
    }
    NumberWithUnits operator++(NumberWithUnits& a, int) {
        return a;
    }
    NumberWithUnits operator--(NumberWithUnits& a) {
        return a;
    }
    NumberWithUnits operator--(NumberWithUnits& a, int) {
        return a;
    }
    NumberWithUnits operator*(NumberWithUnits& a, double b) {
        return a;
    }
    NumberWithUnits operator*(double a, NumberWithUnits& b) {
        return b;
    }
    NumberWithUnits operator*=(NumberWithUnits& a, double b) {
        return a;
    }
    NumberWithUnits operator*=(double a, NumberWithUnits& b) {
        return b;
    }
    bool operator>(const NumberWithUnits& a, const NumberWithUnits& b){
        return true;
    }
    bool operator>=(const NumberWithUnits& a, const NumberWithUnits& b){
        return true;
    }
    bool operator<(const NumberWithUnits& a, const NumberWithUnits& b){
        return true;
    }
    bool operator<=(const NumberWithUnits& a, const NumberWithUnits& b){
        return true;
    }
    bool operator==(const NumberWithUnits& a, const NumberWithUnits& b){
        return true;
    }
    bool operator!=(const NumberWithUnits& a, const NumberWithUnits& b){
        return true;
    }
}