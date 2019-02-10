
#include <iostream>

using namespace std;

void print_months(string* months) {

	for (int i = 0; i < 12; i++) {
		cout << months[i] << "\n";
	}

}

int main() {

	string* months = new string[12];
	months[0] = "January";
	months[1] = "February";
	months[2] = "March";
	months[3] = "April";
	months[4] = "May";
	months[5] = "June";
	months[6] = "July";
	months[7] = "August";
	months[8] = "September";
	months[9] = "October";
	months[10] = "November";
	months[11] = "December";
		
	print_months(months);

}
