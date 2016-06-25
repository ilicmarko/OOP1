#define VELICINA int

template <class T>
class Stack: private Array<T>{
private:
	int top;
public:
	Stack<T>(unsigned capacity = 256) : Array(capacity),top(0){}
	Stack<T>(const Stack<T> &drugi) : Array(drugi), top(drugi.top){}

	void push(const T& x){
		Stack::operator[](top++) = x;
	}

	T pop(){
		return (*this)[--top];
	}

	Stack& operator=(const Stack& s){
		if (this != &s){
			Array = s;
			top = s.top;
		}
		return *this;
	}

	~Stack(){};
};

