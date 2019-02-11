
#include <iostream>

enum Season {
	spring, summer, autumn, winter };

Season& operator++(Season& s) {
	switch(s) {
		case Season::spring: 
			return s = Season::summer;
		case Season::summer: 
			return s = Season::autumn;
		case Season::autumn: 
			return s = Season::winter;
		case Season::winter: 
			return s = Season::spring;
	}
}

Season& operator--(Season& s) {
	switch(s) {
		case Season::spring: 
			return s = Season::winter;
		case Season::summer: 
			return s = Season::spring;
		case Season::autumn: 
			return s = Season::summer;
		case Season::winter: 
			return s = Season::autumn;
	}
}

std::ostream& operator<< (std::ostream& out, const Season& s) {
	switch(s) {
		case Season::spring: 
			out << "spring";
			break;
		case Season::summer: 
			out << "summer";
			break;
		case Season::autumn: 
			out << "autumn";
			break;
		case Season::winter: 
			out << "winter";
			break;
	}
	return out;
}

std::istream& operator>> (std::istream& in, Season& season) {
	std::string s;
	in >> s;

	if (s == "spring") {
			season = Season::spring;
	} else if (s == "summer") {
		season = Season::summer;
	} else if (s == "autumn") {
		season = Season::autumn;
	} else if (s == "winter") {
		season = Season::winter;
	}
			
		
	return in;
}


int main() {

	std::cout << "Enter season: ";
	Season season;
	std::cin >> season;

	std::cout << "You entered: " << season << '\n';
	std::cout << "Next season: " << ++season << '\n';
	--season;
	std::cout << "Previous season: " << --season << '\n';


}


