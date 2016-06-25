#include <iostream>
#include "Complex.h"

using namespace std;

int main(){

	Complex c1(2, 3);
	Complex c2(5.3, 4);

	cout << c1 << endl;

	cout << c1 + c2 << endl;

	Complex c3 = c1 + 3;

	cout << c3 << endl;

	c1 = 4 + c2;

	cout << c1 << endl;

	return 0;
}