// Prompt user to enter an integer less than 10. Prints all multiples of n
//less than 100 using a for loop. N numbers per line.

#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter an integer less than 10: ";
	cin >> n;

	if(n > 10){
		cout << "Invalid";
		return 0;
	}

	for(int r=1; r <= 100; r++){
		for(int c=1; c <= n; c++){
			if(r*n <= 100) cout << (r*n) << " ";
			if(c%n == 0) cout << endl; 		
		}	
	
	} 		
	return 0;

}
