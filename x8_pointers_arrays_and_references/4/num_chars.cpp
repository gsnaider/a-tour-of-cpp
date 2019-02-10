#include <iostream>

int num_chars_in_between(char* c1, char* c2) {
	int distance = 0;

	// Assuming c1 < c2
	while (c1 != c2) {
		c1++;
		distance++;
	}
	return distance;

	
}

int main() {

	char name[] = "Gaston";
	char* c1 = &name[1];
	char* c2 = &name[3];

	std::cout << num_chars_in_between(c1, c2) << "\n";

}