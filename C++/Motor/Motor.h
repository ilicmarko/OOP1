#pragma once
#include <string>
#include <iostream>

using namespace std;

class Motor{
private:
	string ime;
public:
	Motor(string i) :ime(i){}
	Motor(const Motor& m) :ime(m.ime){}

	virtual ~Motor(){
		cout << "DELETE MOTOR" << endl;
	}

	virtual Motor *clone(){
		cout << "Konstruktor kopije MOTOR" << endl;
		return new Motor(*this);
	}

	virtual string toString(){
		return "Motor: " + ime;
	}
};