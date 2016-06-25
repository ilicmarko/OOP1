#pragma once
#include <iostream>

class Complex
{
private:
	double real, imag;

public:
	// Mora da ima default argumente zato sto treba da ima default komstuktor kad se nadje Complex + double.
	Complex(double r = 0, double i = 0) :real(r), imag(i){};
	~Complex();

	// Funkcija mora da bude friend kako bi se pozvao operator+(Complex(double), c);
	friend const Complex& operator+(const Complex& c1, const Complex& c2){
		return Complex((c2.real + c1.real), (c2.imag + c1.imag));
	}

	// Ovo sam ja dodao samo da bih mogao lakse da stampam
	friend std::ostream& operator<<(std::ostream& s, const Complex c){
		s << "Realan deo: " << c.real << ", imaginaran deo: " << c.imag;

		return s;
	}
};

