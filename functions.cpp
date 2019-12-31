#include <iostream>

using namespace std;


int years() {
	int year = 2020;
	int fyear;

	cout << "Izzy M. made this from memory!\n" << "The year will be: " << year << " - TIME FLIES SO FAST!" << endl << flush;
	jump_question:
	cout << "What is your favorite year?\n" << endl;
	cin >> fyear;
	return 0; // Putting this here because if I don't there seems to be an issue where typing a letter would cause a constant loop


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
	else if (fyear <= 2020 && 1993 || fyear <= 1992 && 1989 || fyear <= 1988 && 3) {
		cout << "That's a pretty good year: " << fyear << "\n" << endl << flush;
		goto jump_question;
	}
}

void goodbye()
{

	if (1 > 3) {
		cout << "Hello!\n";
	}

	else {
		cout << "\n\n" "This is a seperate function that will write out if breaking from the previous, goodbye! :D\n\n";
	}

}
