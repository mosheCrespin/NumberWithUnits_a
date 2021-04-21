#include "NumberWithUnits.hpp"
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;


namespace ariel{
	//constructors
	NumberWithUnits::NumberWithUnits(double num, std::string type){
		this->type=type;
		this->num=num;
	}
		NumberWithUnits::NumberWithUnits(){
		this->num=0;
	}
	double NumberWithUnits::get_num(){return this->num;}
	std::string NumberWithUnits::get_type(){return this->type;}

	void NumberWithUnits::read_units(ifstream& units_file){}
	NumberWithUnits NumberWithUnits::operator-() const{
		return NumberWithUnits();
	} //unary minus
	NumberWithUnits NumberWithUnits::operator-=(const NumberWithUnits &second) const{
		return NumberWithUnits();
	} //down
	NumberWithUnits NumberWithUnits::operator-(const NumberWithUnits &second) const{
				return NumberWithUnits();

	} //binary minus
	NumberWithUnits NumberWithUnits::operator+() const{
				return NumberWithUnits();

	} //unary plus
	NumberWithUnits NumberWithUnits::operator+=(const NumberWithUnits &second) const{
				return NumberWithUnits();

	} //add
	NumberWithUnits NumberWithUnits::operator+(const NumberWithUnits &second) const{
				return NumberWithUnits();

	}//binary plus	
	NumberWithUnits operator*(double d,const NumberWithUnits &second){//down
				return NumberWithUnits();

	} //down
	bool NumberWithUnits::operator==(const NumberWithUnits &second) const{
				return true;

	}
	bool NumberWithUnits::operator!=(const NumberWithUnits &second) const{
		return true;
	}

	bool NumberWithUnits::operator<(const NumberWithUnits &second) const{
						return true;

	}
	bool NumberWithUnits::operator>(const NumberWithUnits &second) const{
						return true;

	}
	bool NumberWithUnits::operator>=(const NumberWithUnits &second) const{
						return true;

	}
	bool NumberWithUnits::operator<=(const NumberWithUnits &second) const{
						return true;

	}
	ostream &operator<<(ostream &os,const NumberWithUnits &temp){
		return os;
	}
	istream &operator>>(istream &is, NumberWithUnits &temp){
				return is;

	}// not const becouse we do want to modify this obj



}
