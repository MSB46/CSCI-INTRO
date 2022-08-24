//make a recursive function called doubleOdd that doubles the amount of odd numbers.
#include <iostream>
using namespace std;
void doubleOdd(int n){
	if(n <= 0) 
		return;
	doubleOdd(n / 10);
	cout << n % 10;
	if(n % 10 % 2 != 0)   
		cout << n % 10;
 		

}

int main(){
	doubleOdd(12);
	cout << endl;
	// prints 112

	doubleOdd(212);
	cout << endl;
	// prints 2112

	doubleOdd(112);
	cout << endl; 
	// prints 11112
	return 0;
}

