#include <iostrream>
using namespace std;

int main() {
	char input;//chars hold letters
	cout<<"Do you like the Broncos?"<< endl;
	cin >> input;
	if (input == 'y')
		cout << "You da best!" << endl;
	else if (input == 'n')
		cout << "Don't talk to me fam" << endl;