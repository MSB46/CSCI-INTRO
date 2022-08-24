//Problem 3, Nested handout (User supplies the height)

#include <iostream>
using namespace std;
int main(){
	
	int h;
	cout << "Enter height of stars: ";
	cin >> h;

	for (int r = 1; r <= (2*h)-1; r++){
	// Keep making rows until r reaches twice the given height minus 1

		for (int c = 1; c <= h; c++){
		// Keep making columns until c reaches the given height

			if(r + c >= h+1 && r - c <= h-1)
			//Print a star only if the current row and column is greater or equal the height plus one
			//AND if the current row subtracted by the current column is less than or equal to the height minus one
 
				cout << "*";
			else cout << " ";




		}

	cout << endl;
	// At the end of each column, skip a line (makes a row)

	}	
	return 0;
}
