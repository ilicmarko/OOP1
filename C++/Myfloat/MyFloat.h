#pragma once
class MyFloat
{
private:
	float num;
public:
	MyFloat(float n) :num(n){};

	// Mora da se definisu svi tipovi operatora + zbog onog kasta u float
	// Skocko: jer on ne zna da li da kastuje float u myfloat ili myfloat u float

	friend float operator+(float f, MyFloat mf){
		return f + mf.num;
	}

	float operator+(float f){
		return this->num + f;
	}

	MyFloat& operator+(MyFloat mf){
		return MyFloat(this->num + mf.num);
	}

	MyFloat& operator=(const MyFloat& f){
		num = f.num;
		return *this;
	}

	friend std::ostream& operator<< (std::ostream& os, MyFloat f){
		os << f.num;
		return os;
	}
	~MyFloat(){};
};

