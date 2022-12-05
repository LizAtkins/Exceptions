// Elizabeth Atkins
// CIS 1202 Programming Assignment #15a: Exceptions

#include <iostream>
using namespace std;
const int SIZE = 52;

char character(char, int);
class invalidRangeException {};
class invalidCharacterException{};
class invalidTransitionException{};
int main() {

	char alphabet[SIZE] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a','b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	char s;
	int o;



	cout << endl << endl;
	system("pause");
	return 0;
}

char character(char start, int offset) {
	int i;
	bool found = false;
	char letter;

	if (start >= 'A' && start <= 'z') {
		while (i < SIZE && !found) {
			if (alphabet[i] == start) {
				found = true;
				letter = i;
			}
			i++;
		}
		letter = alphabet[(i - 1) + offset];
		if (letter < 'A' || letter > 'z') {
			throw invalidRangeException();
		}
	}
	else {
		throw invalidCharacterException();
	}
	if (start >= 'A' && start <= 'Z') {
		throw invalidTransitionException();
	}
	return letter;
 }
