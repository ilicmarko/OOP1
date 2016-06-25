#pragma once
#define VELICINA int // Ovo sam ja dodao da mi bude lakse da namestig kog obsega je velicina

using namespace std;

template <class T>
class Array
{
private:
	T* niz;
	VELICINA size;

public:
	Array<T>(unsigned s = 100) : size(s), niz(new T[s]){};

	// Copy
	Array<T>(const Array<T> &drugi) : size(drugi.size),niz(new T[drugi.size]){
		for (VELICINA i = 0; i<size; i++) niz[i] = drugi.niz[i];
	}

	Array<T>& operator=(const Array<T>& a){
		if (this != &a){
			delete[] niz;
			niz = new T[a.size];
			size = a.size;
			for (VELICINA i = 0; i < size; i++) niz[i] = a.niz[i];
		}
		return *this;
	}

	T& operator[](VELICINA i){
		return niz[i];
	}

	// Naglasio je u zadatku da treba i za konstantne objekte
	const T& operator[](VELICINA i) const {
		return niz[i];
	}


	friend const Array<T> operator+(const Array<T>& prvi,const Array<T>& drugi){
		if (prvi.size != drugi.size) throw invalid_argument("Dalje neces moci"); // Tako je rekao Gohlub ;)
		Array<T> tmp(prvi.size);
		for (VELICINA i=0; i<tmp.size; i++){
			tmp[i] = prvi[i] + drugi[i];
		}
		return tmp;
	}

	friend ostream& operator<<(ostream &os, Array<T> a){
		for (VELICINA i = 0; i<a.size; i++) os << a[i] << " ";
		return os;
	}

	~Array<T>(){
		delete[] niz;
	};
};

