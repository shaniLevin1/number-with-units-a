#include "doctest.h"
#include "NumberWithUnits.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>
using namespace ariel;

ifstream units_file{"units.txt"};
TEST_CASE("check throw exception"){
    NumberWithUnits::read_units(units_file);
    NumberWithUnits a{3, "ton"};
    NumberWithUnits b{50000, "sec"};
    NumberWithUnits c{410, "cm"};
    NumberWithUnits d{312, "mile"};
    CHECK_THROWS(a+=b);
    CHECK_THROWS(a-c);
    CHECK_THROWS(b-=c);
    CHECK_THROWS(a+=d);
    CHECK_THROWS(d+=c);
    CHECK_THROWS(d+=d);
}

TEST_CASE("check operators of addition, subtraction, and multiplication"){ //+, -, +=, -=, *, *=, ++, --
    NumberWithUnits::read_units(units_file);
    NumberWithUnits a{50, "min"};
    NumberWithUnits b{35, "sec"};
    double num=2;
    CHECK(a+b==NumberWithUnits{50.35, "min"});
    CHECK(a-b==NumberWithUnits{49.25, "min"});
    CHECK(b+a==NumberWithUnits{3035, "sec"});
    CHECK(a++==NumberWithUnits{50, "min"});
    CHECK(++a==NumberWithUnits{51, "min"});
    CHECK(b--==NumberWithUnits{35, "sec"});
    CHECK(--b==NumberWithUnits{34, "sec"});
    CHECK(a*num==NumberWithUnits{100, "min"});
    
}
TEST_CASE("check operators of Comparison"){ ///<, > >=, <=, !=, ==
    NumberWithUnits::read_units(units_file);
    NumberWithUnits a{5, "m"};
    NumberWithUnits b{5000, "cm"};
    NumberWithUnits c{5000, "sec"};
    NumberWithUnits d{80, "kg"};
    NumberWithUnits e{8, "ton"};
    CHECK(b>a);
    CHECK(b!=c);
    CHECK_FALSE(e<a);
    CHECK_FALSE(d>e);
    CHECK_FALSE(d>c);
    CHECK_FALSE(d!=c);
}





