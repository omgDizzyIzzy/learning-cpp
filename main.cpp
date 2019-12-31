/* Started on 12/28/2019 at 5:46am - 10am

Constantly updating to make slightly better and look cleaner, this is for learning purposes only for myself to track progression
It's also my way of "taking notes" as I'm a hands on learning

This is essentially my "Hello World"

*/

/* PST TRAVIS! Ignore the lovie shit, not meant for you! xD.... unless *eyes* lol
 Yes I know this is VERY messy */

#include <iostream>

using namespace std;

int main()
{
	int year = 2020; // Removed math as I got it locked in my brain;
	int fyear;
	cout << "Izzy M. made this from memory!\n" << "The year will be: " << year << " - TIME FLIES SO FAST!" << endl << flush;
	jump_question:
	cout << "What is your favorite year?\n" << endl;
	cin >> fyear;


	if (fyear >= 2020) {
		cout << fyear << " isn't a year yet silly! - Try another! " << flush;
		goto jump_question;
		}
		else if (fyear == 1989) {
		cout << "That's your birth-year my love! " << fyear << " <3 - Try another! " << flush;  // Refering to my love!
		goto jump_question;
		}
		else if (fyear == 1993) {
		cout << "WOW! How did you know my birth-year was " << fyear << "? I love you!! - Try another! " << flush;
		goto jump_question;
		}
		else if (fyear == 1 || fyear == 2) {
		cout << "Don't be silly! - Try another! " << flush;
		goto jump_question;
		}
		else {
		cout << "That's a pretty good year: " << fyear << " - Try another!" << endl << flush;
		goto jump_question;
		}

	system("PAUSE");
	return 0;

}
