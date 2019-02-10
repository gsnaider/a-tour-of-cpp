

#include <iostream>

using namespace std;

struct year {
	string* months;
	int* days;
};

struct month {
	string name;
	int days;
};

void print_year(const year& y) {
	for (int i = 0; i < 12; i++) {
		cout << y.months[i] << "......." << y.days[i] << '\n';
	}
}

void print_year(const month* m) {
	for (int i = 0; i < 12; i++) {
		cout << m[i].name << "......." << m[i].days << '\n';
	}
}

int main() {

	year y;

	string month_names[] {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	int days[] {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	y.months = month_names;
	y.days = days;
	
	print_year(y);
	cout << '\n';

	month* months = new month[12];

	months[0].name = "January";
	months[0].days = 31;

	months[1].name = "February";
	months[1].days = 28;

	months[2].name = "March";
	months[2].days = 31;

	months[3].name = "April";
	months[3].days = 30;

	months[4].name = "May";
	months[4].days = 31;

	months[5].name = "June";
	months[5].days = 30;

	months[6].name = "July";
	months[6].days = 31;

	months[7].name = "August";
	months[7].days = 31;

	months[8].name = "September";
	months[8].days = 30;

	months[9].name = "October";
	months[9].days = 31;

	months[10].name = "November";
	months[10].days = 30;

	months[11].name = "December";
	months[11].days = 31;

	print_year(months);


}