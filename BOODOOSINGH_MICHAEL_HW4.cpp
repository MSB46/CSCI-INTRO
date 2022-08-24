// Count all the odd numbers the user enters. Give them three chances.

#include <iostream>
using namespace std;
int main(){
	int n, x = 0, counter = 0;
	cout << "Enter an integer from 1000 to 1000000 : ";
	cin >> n;

	while(n < 1000 || n > 1000000){
		if(counter >= 3)
			return 0;
		
		cout << "Try again: ";
		cin >> n;
		counter++;
	}

	for(int i=0; i<=7; i++){
		if(n%2 != 0){
			x++;			
		}
		n=n/10;
	}

	cout << "There are " << x << " odd numbers" << endl;
	
	return 0;
}
	
