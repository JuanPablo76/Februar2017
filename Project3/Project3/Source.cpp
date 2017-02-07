#include <iostream>
using namespace std;
int main() {
	int input;
	cout << "How old are you?" << endl;
	cin >> input;
	if (input % 2 == 0)
		cout << "even steven" << endl;
	else
		cout << "oddball" << endl;

}