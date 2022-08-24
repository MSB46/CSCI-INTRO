#include <iostream>
using namespace std;

int main(){
	string housenumber;
	string street_one;
	string street_two;
	string county;
	string state;
	int zipcode;

	cout << "What's your house number?\n";
	cin >> housenumber;

	cout <<  "What's your street? (Use spaces!)\n";
	cin >>  street_one >> street_two;

	cout <<  "What's your county?\n";
	cin >>  county;

	cout << "What's your state?\n";
	cin >>  state;

	cout <<  "What's your zip code?\n";
	cin >>  zipcode;

	cout << endl  << housenumber << " "  << street_one << " " << street_two << endl
	<< county << ", " << state << " "  <<  zipcode << endl;
	return 0;
}
