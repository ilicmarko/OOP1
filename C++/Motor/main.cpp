#include "Auto.h"

int main(){
	MotorSaTurbinom *m1 = new  MotorSaTurbinom("Dizel V8", "Bosch");

	Auto a(m1, 1);
	Auto b(a);

	cout << a.toString() << endl;
	cout << b.toString() << endl;
}