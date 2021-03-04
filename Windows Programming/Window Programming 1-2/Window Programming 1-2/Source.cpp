#include <iostream>

using namespace std;

int main() {

	int i;
	bool onLoop = true;

	while (onLoop) {

		cout << "Input : ";
		cin >> i;

		switch (i) {

		default:
			break;
		case 1:
			cout << "Hongik University" << endl;
			break;
		case 2:
			cout << "Game Software" << endl;
			break;
		case 3:
			cout << "Bye!" << endl;
			onLoop = false;
			break;
		}
	}

	return 0;
}
