
#include <iostream>

using namespace std;

enum Month { JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };

struct Date {
	int year;
	Month month;
	int day;

	Date(int y, Month m, int d) : year {y}, month {m}, day {d} {}
};

Date read_date() {
	cout << "Year: ";
	int year;
	cin >> year;

	cout << "Month: ";
	int month;
	cin >> month;
		
	cout << "Day: ";
	int day;
	cin >> day;


	cout << year << "-" << month << "-" << day << "\n";

	Date d(year, static_cast<Month>(month), day);
	return d;
}

// Date* read_date() {
// 	cout << "Year: ";
// 	int year;
// 	cin >> year;

// 	cout << "Month: ";
// 	int month;
// 	cin >> month;
		
// 	cout << "Day: ";
// 	int day;
// 	cin >> day;


// 	cout << year << "-" << month << "-" << day << "\n";

// 	// Date d(year, static_cast<Month>(month), day);
// 	return new Date(year, static_cast<Month>(month), day);
// }

void print_date(const Date& date) {
	cout << date.year << "-" << date.month << "-" << date.day << "\n";
}

// void print_date(const Date* date) {
// 	cout << date->year << "-" << date->month << "-" << date->day << "\n";
// }

int main () {
	Date date = read_date();
	
	// Date* date = read_date();
	print_date(date);
}