#include <iostream>
using namespace std;

class B {
	public:
		B() {
			value = 1;
		}
		B(int v) : value(v) {
		}
		~B() {
		}
		int getValue(void) {
			return value;
		}
		void setValue(int v) {
			value = v;
		}
		void print() const {
			cout << "\nFrom the Base B:: value : " << value
		}
protected:
	int value;
};

class B1 {
public:
	B1() : value(0) {
	}
	B1(int v) {
		value = v;
	}
protected: 
	int value;
};

class D2 : public B1 {
private:
	int data2;
};


class D : public B {
public:
	D() : B() {
		data = 1;
	}
	D(int a) : B() {
		data = a;
	}
	D(int v, int a) : B(v), data(a) {

	}
	~D() {

	}

	void updateData(int v, int a) {
		value = v;
		data = a;
	}

	void print() const {
		cout << "\nFrom the Base B:: value : " << value
			<< "\n From the Derived D::data : " << data << endl;
	}

private: 
	int data;
};

class D1 : protected B {
public:
	D1() : B(), data(1) {

	}
	D1(int v, int a) : B(v), data(a) {

	}

	~D1() {

	}

	int getData() {
		return data;
	}
private:
	int data;
};



int main() {
	B* bPtr1 = new B[5];
	B b1;

	D* dPtr2;
	D d2;

	D1 d1Obj3(4, 9);

	//d1Obj3.getValue(); Does not work

	//b1.value   Does not work because value is "protected," or encapsulated
	//(*bPtr1).getValue();  Does not work because bPtr1 does not point to an initialized value
	//bPtr1 = nullptr;
	//bPtr1->getValue(); Does not work because although the address is valid, value is not initialized
	//bPtr1 = &b1;
	//bPtr1 = &d2;  // valid
	//dPtr2 = &d2;

	cout << dPtr2->getValue() << endl; 

	bPtr1->print();
	bPtr1 = &d2;
	bPtr1->print();



	D2 d2Obj4; //does not have appropriate constructors

	return 0;
}