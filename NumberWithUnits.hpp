#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
namespace ariel{
	class NumberWithUnits{
		private:
			static unordered_map<std::string,pair<int, std::string>> data;//km:{1000,meter}
			std::string type;
			double num;
		public :
			NumberWithUnits(double num, std::string type);
			NumberWithUnits();
			~ NumberWithUnits(){};
			static void read_units(ifstream& units_file);
			NumberWithUnits operator-() const; //unary minus
			NumberWithUnits operator-=(const NumberWithUnits &second) const; //down
			NumberWithUnits operator-(const NumberWithUnits &second) const; //binary minus
			NumberWithUnits operator+() const; //unary plus
			NumberWithUnits operator+=(const NumberWithUnits &second) const; //add
			NumberWithUnits operator+(const NumberWithUnits &second) const; //binary plus	
			friend NumberWithUnits operator*(double d,const NumberWithUnits &second); //down
			// void operator++();
			// void operator--();  
			bool operator==(const NumberWithUnits &second) const;
			bool operator!=(const NumberWithUnits &second) const;
			bool operator<(const NumberWithUnits &second) const;
			bool operator>(const NumberWithUnits &second) const;
			bool operator>=(const NumberWithUnits &second) const;
			bool operator<=(const NumberWithUnits &second) const;
			friend ostream &operator<<(ostream &os,const NumberWithUnits &temp);
			friend 	istream &operator>>(istream &os, NumberWithUnits &temp);// not const becouse we do want to modify this obj
			double get_num();
			std::string get_type();
	};








}
