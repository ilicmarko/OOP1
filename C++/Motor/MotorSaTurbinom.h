#pragma once
#include "Motor.h"

using namespace std;

class MotorSaTurbinom:public Motor{
private:
	string turbina;
public:
	MotorSaTurbinom(string i, string t) :Motor(i), turbina(t){};
	MotorSaTurbinom(const MotorSaTurbinom &drugi) : Motor(drugi), turbina(drugi.turbina){};


	virtual ~MotorSaTurbinom(){
		cout << "DELETE TURBINA" << endl;
	}

	Motor *clone(){
		return new MotorSaTurbinom(*this);
	}

	string toString(){
		return Motor::toString() + " sa turbinom " + turbina;
	}

};