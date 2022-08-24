//Ask the user for an integer. Make a function that reverses the integer the user puts in. Ask the user 10 times.

#include <iostream>
using namespace std;
int reverse(int n){
	int result = 0;
	while(n >= 10){
		cout << n % 10;
		n /= 10;
	}

	return n;
}
int main(){
	int n;
	for(int x = 1; x <= 10; x++){
		cout << "Enter an integer: \n";
		cin >> n;
		cout << reverse(n) << " is " << n << " reversed \n";
		
	}

	return 0;

} 
