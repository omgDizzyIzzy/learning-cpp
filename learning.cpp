/* Started on 12/28/2019 at 5:46am - 10am

Constantly updating to make slightly better and look cleaner, this is for learning purposes only for myself to track progression
It's also my way of "taking notes" as I'm a hands on learning

This is essentially my "Hello World"

*/

/* PST TRAVIS! Ignore the lovie shit, not meant for you! xD.... unless *eyes* lol
 I want to do like a "retry" thing how could I go about using it? I literally just learned about if, else if, else etc. but having troubles understanding how I can have it loop back to try again
 Yes I know this is VERY messy */

#include <iostream>
#include <string>   // this header is used when declared variable type is string
#include <sstream>  // used to enable interoperation between stream buffers and string objects

using namespace std; // This makes it so I don't have to type "std::cout" "std::cin" every time, only "cout/cin like I've been doing all day"

	// I haven't learned how to do loops yet so you can "retry" your answer yet, my brain is fried for the rest of the day
int main()
{
	/* string input = "";
	I want to rewrite this with string input */

	int year;
	int fyear;
	int n1 = 202;
	int n2 = 10;
	year = n1 * n2 - 10 + n2; // I was testing math stuff
	cout << "Izzy M. made this from memory!\n";
	cout << "The year will be: " << year << " - TIME FLIES SO FAST!\n\n";
	jump_question:
	cout << "What is your favorite year? (0 to close)\n";
	cin >> fyear;
	if (fyear >= 2020) {
		cout << "\n" << fyear << " isn't a year yet silly!\n\nTry another! ";
		goto jump_question;
	}
	else if (fyear == 1989) {
		cout << "\nThat's your birth-year my love! " << fyear << " <3\n\nTry another! ";  // Refering to my love!
		goto jump_question;
	}
	else if (fyear == 1993) {
		cout << "\nWOW! How did you know my birth-year was " << fyear << "? I love you!!\n\nTry another! ";
		goto jump_question;
	}
	else if (fyear == 1 || fyear == 2) {
		cout << "\nDon't be silly!\n\nTry another! ";
		goto jump_question;
	}
	else if (fyear == 0) {
		exit ( 1 );
	}
	/* else if (fyear == forever) {
		std::cout << "That's how long I will love you!\n\n\n\n\n";   SHUT UP!
	} I AM IDIOT, WORDS CANNOT BE INTEGERS :c hence rewriting with string input (Assuming that fixes) */
	else {
		cout << "\nThat's a pretty good year: " << fyear << "\n\nTry another! ";
		goto jump_question;
	}
	system("PAUSE");  // There are better ways to do this but I don't know them yet
	return 0;

}
