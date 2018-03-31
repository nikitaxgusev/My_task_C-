#pragma once
#include <iostream>
#include <fstream>

class OwnInt
{
private:
	int n;
public:
	OwnInt():n(0)
	{ }
	OwnInt(int num): n(num)
	{ }


	OwnInt operator+ (OwnInt ObjA);
	OwnInt operator- (OwnInt ObjAA);
	OwnInt operator* (OwnInt ObjAA);
	OwnInt operator/ (OwnInt ObjAA);

	bool operator<(OwnInt ObjA);
	bool operator>(OwnInt ObjA);
	bool operator==(OwnInt ObjA);
	bool operator!=(OwnInt ObjA);

	void operator+=(OwnInt ObjA);

	
	OwnInt operator++();
	OwnInt operator--();

	OwnInt operator++(int);
	OwnInt operator--(int);

	friend std::istream& operator>> (std::istream& is,OwnInt& A);
	friend std::ostream& operator<< (std::ostream& os, const OwnInt& a);

	~OwnInt()
	{ }
};

