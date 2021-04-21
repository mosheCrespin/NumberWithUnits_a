#include <iostream>
#include<string>
#include <fstream>
#include <sstream>
#include "doctest.h"
#include "NumberWithUnits.hpp"
#include <stdexcept>
using namespace ariel;
using namespace std;


TEST_CASE("general tests"){
    NumberWithUnits a{10, "km"};   // 2 kilometers
    NumberWithUnits b{10, "m"};
    NumberWithUnits c{9, "km"}; 
    NumberWithUnits aa{10, "km"}; 


    CHECK((2*a).get_type() == "km");
    CHECK((2*a).get_num() == 20);
    CHECK((a+b).get_type() == "km");
    CHECK((a+b).get_num() == 10.1);
    CHECK((b+a).get_type() == "m");
    CHECK((b+a).get_num() == 10010);
    CHECK((a-b).get_type() == "km");
    CHECK((a-b).get_num() == 9.9);
    CHECK((b-a).get_type() == "m");
    CHECK((b-a).get_num() == 9990);
    CHECK(a==aa);
    CHECK(a!=b);
    CHECK(c<a);
    CHECK(c<=a);
    CHECK(c>=b);
    CHECK(b<c);
    CHECK(a<=aa);
    CHECK((+aa).get_num() == (-10));
    CHECK((-aa).get_num() == (10));
    CHECK(b!=a);

}

