#include <iostream>
using namespace std;

int main() {

	int input = 2; // dummy value


	while (input != 10) {
		cout << "How many cookies would you like? press 10 to quit" << endl;
		cin >> input;
		cout << "here are your " << input << " cookies" << endl;
	}
}