#pragma once
#include "MotorSaTurbinom.h"

class Auto{
private: 
	Motor *motor;
	int broj;
public:
	Auto(Motor* m, int br) :motor(m), broj(br){}
	Auto(const Auto& drugi) :motor(drugi.motor->clone()), broj(drugi.broj){}

	void promeniMotor(Motor *m){
		motor = m;
	}

	virtual Auto *clone(){ return new Auto(*this); }

	virtual ~Auto(){ 
		cout << "DELETE AUTO" << endl;
		delete motor;
	}

	string toString(){
		return "Auto: " + motor->toString();
	}

};