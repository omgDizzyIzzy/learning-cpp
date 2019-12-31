#include <iostream>

using namespace std;

void years() {

	int year = 2020;
	int fyear;
	cout << "Izzy M. made this from memory!\n" << "The year will be: " << year << " - TIME FLIES SO FAST!" << endl << flush;
	jump_question:
	cout << "What is your favorite year?\n" << endl;
	cin >> fyear;


	if (fyear >= 2020) {
		cout << fyear << " isn't a year yet silly! - Try another!\n" << flush;
		goto jump_question;
	}
	else if (fyear == 1989) {
		cout << "That's your birth-year my love! " << fyear << " <3 - Try another!\n" << flush;  // Refering to my love!
		goto jump_question;
	}
	else if (fyear == 1993) {
		cout << "WOW! How did you know my birth-year was " << fyear << "? I love you!! - Try another!\n" << flush;
		goto jump_question;
	}
	else if (fyear == 1 || fyear == 2) {
		cout << "Don't be silly! - Try another!\n" << flush;
		goto jump_question;
	}
	else {
		cout << "That's a pretty good year: " << fyear << " - Try another!\n" << endl << flush;
		goto jump_question;
	}

}
