#include <iostream>
using namespace std;
int main(){
	int x;
	cout << "Enter an integer: " << endl;
	cin >> x;
	
	if((x%2)==0){
		cout << "The answer is " << (x/2) << endl;
		return 0;
	}
	
	cout << "The answer is " << (x*3) + 1 << endl;
	return 0;
}
