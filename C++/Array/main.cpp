#include <iostream>
#include "Array.h"
#include "Stack.h"

/* 
   Implementirati sablon kase Array. Za ovaj sablon napisati konstuktor, desktuktor, konsktuktor kopije, operator dodjele vrednosti
   i operator pristupa elementima [ ] (ovaj operator implementirati tako da moze da pristupa i konstantim objektima). Implementirati sablon klase Stek
   privatnim nasledjivanjem sablona klase Array.
*/

using namespace std;

int main(){
	
	Array<int> a1(3);

	a1[0] = 3;
	a1[1] = 4;
	a1[2] = 35;

	Array<int> a2(4);
	a2[0] = 5;
	a2[1] = 4;
	a2[2] = 1;
	a2[3] = 0;

	cout << a1 << endl;

	cout << a2 << endl;
	try{
		cout << a1 + a2 << endl;
	}
	catch (const exception& e){
		cout << e.what() << endl;
	}

	Stack<int> s;

	s.push(2);
	s.push(5);
	s.push(65);
	s.push(1);
	cout << s.pop() << endl;

	Array<int> *niz = (Array<int>*)&s;

	return 0;
}