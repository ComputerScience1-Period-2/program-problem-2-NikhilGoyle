/* 
Nikhil Goyle - 9/25/2017 - Period 2
Program Problem 2: Take in Data
create variables to store data, take in data of multiple types, compute small operations and display values
*/

#include <iostream>
#include <conio.h>

using namespace std;

void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

void main() {
	int cost_of_carpets;
	char what_grade;
	bool answer_seventh = true;
	double value_e;
	int num1, num2, num3, num4;

	cout << "How many dollars do you think 500 rare persian carpets would cost? ";
	cin >> cost_of_carpets;
	cout << "What grade are you in? (7/8/9) ";
	cin >> what_grade;
	if (what_grade == '7') {
		answer_seventh == false;
	}
	cout << "What is the value of the number \"e\"? ";
	cin >> value_e;
	
	cout << "Give me 3 random whole numbers : " << "\n";
	cout << "Number 1: ";
	cin >> num1;
	cout << "Number 2: ";
	cin >> num2;
	cout << "Number 3: ";
	cin >> num3;
	
	cout << "I think 500 carpets would be a bit more than " << cost_of_carpets << " dollars" << endl;
	cout << boolalpha << "It is " << answer_seventh << " that I am in the same grade as you" << endl;
	cout << "Actually, e is infinite, but can be simplified to " << value_e << endl;


	cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
	num4 = num2 * num3;
	cout << num2 << " * " << num3 << " = " << num4 << "\n";



	pause();

}