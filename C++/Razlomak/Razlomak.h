#pragma once
#define TIP double
#include <iostream>

class Razlomak
{
private:
	TIP brojilac, imenilac;
public:
	Razlomak(TIP a = 0, TIP b = 1) :brojilac(a), imenilac(b){};

	// Pre increment
	// U zadatku trazi da bude definisano prijateljska
	// http://en.cppreference.com/w/cpp/language/friend

	friend Razlomak& operator++(Razlomak& r){
		r.brojilac += r.imenilac;
		return r;
	}

	// Ovo je ako je hocemo da bude funckija clanica
	/*
		Razlomak& operator++(){
			brojilac += imenilac;
			return *this;
		}
	*/

	// Post increment
	// Mora da ima ovaj int, to je dummy argument kako bi mogao da razlukje od pre increment
	// Mora da vrati const rezultat zato sto je post increment L vrednost

	friend const Razlomak& operator++(Razlomak& r, int){
		return ++r;
	}

	/*
		const Razlomak& operator++(int){
			return ++*this;
		}
	*/

	// Iskoristio sam vec napisan operator, zato sto nema razlike osim da je const
	// Moze da se napise isto kao gore, a moze i da se napravi temp objekat

	// Nacin 2:

	/*
		Razlomak temp(brojilac, imenilac);
		temp.brojilac += imenilac;
		return temp;
	*/

	friend std::ostream& operator<<(std::ostream& os, Razlomak& r){
		os << r.brojilac << " / " << r.imenilac;
		
		return os;
	}
	

	~Razlomak(){};
};

