#include <limits>
#include <iostream>
#include "Numbers.h"
using namespace std;

int Numbers::years()
{
	int year = 2020;
	int fyear;
	cout << "The year will be: " << year << " - TIME FLIES SO FAST!" << endl << flush;
jump_question:
	cout << "What is your favorite year?\n" << endl;
	while (!(cin >> fyear)) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "\nPlease type a number, try again!\n";
			goto jump_question;
	}
	if (fyear >= 2020) {
		cout << fyear << " isn't a year yet silly! - Try another!\n\n" << flush;
			goto jump_question;
	}
	else if (fyear == 1989) {
		cout << "That's your birth-year my love! " << fyear << " <3 - Try another!\n\n" << flush;  // Refering to my love!
			goto jump_question;
	}
	else if (fyear == 1993) {
		cout << "WOW! How did you know my birth-year was " << fyear << "? I love you!! - Try another!\n\n" << flush;
			goto jump_question;
	}
	else if (fyear == 1 || fyear == 2) {
		cout << "Don't be silly! - Try another!\n\n" << flush;
			goto jump_question;
	}
	else if (fyear <= 2020 && 1993 || fyear <= 1992 && 1989 || fyear <= 1988 && 3) {
		cout << "That's a pretty good year: " << fyear << "\n\n" << endl << flush;
			goto jump_question;
	}
	return 0;
}
