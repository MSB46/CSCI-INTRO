#include <iostream>
using namespace std;
int main(){
	int i,t;
	double r;
	cout << "How many inches tall are you?: ";
	cin >> i;
	t = i/12;
	r = i%12;

	cout << "That is " << t << " feet and " << r << " inches \n";
	return 0;
}
