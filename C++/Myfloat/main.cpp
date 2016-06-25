#include <iostream>
#include "MyFloat.h";

using namespace std;

int main(){

	MyFloat x = 3.5;
	MyFloat y = x + 4.1;
	MyFloat s = x + y;
	float z = 5.3 + y;
	float k = z + 1.23;

	cout << x << endl;
	cout << y << endl;
	cout << z << endl;
	cout << s << endl;
	cout << k << endl;
	

	return 0;
}