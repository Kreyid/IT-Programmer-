#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int magic;
	int guess;
	magic = rand();
	do {
		cout << "Vedite svoy variant magicheskogo chisla: ";
		cin >> guess;
		if (guess = magic) { cout << "** Pravilno **"; }
		else {
			cout << "Ochen jal, no eto nepravilno. ";
			if (guess > magic)
				cout << "Vash variant bolshe magicheskogo chisla.\n";
			else cout << "Vash variant menshe magicheskogo chisla.\n";
		}
	} while (guess != magic);
	return 0;
}