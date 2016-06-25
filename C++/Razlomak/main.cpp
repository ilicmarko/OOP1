/*
	Izvrsiti preklapanje operatore pre i postdekrementiranja za klasu koja implementira razlomak.
*/

#include <iostream>
#include "Razlomak.h"

using namespace std;

int main(){

	Razlomak r(5, 3); 

	cout << r << endl;

	r++;

	//r++++; Ovo treba da vrati gresku zato sto je post increment Const

	cout << r << endl;

	return 0;
}