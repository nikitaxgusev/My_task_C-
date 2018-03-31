#include "OwnInt.h"

OwnInt OwnInt::operator+(OwnInt  A)
{
	int number = n;
	int number1 = A.n;
	number = number + number1;
	return OwnInt(number);
}

OwnInt OwnInt::operator-(OwnInt  ObjA)
{
	int A = n;
	int B = ObjA.n;

	A = A - B;
	return OwnInt(A);
}

OwnInt OwnInt::operator*(OwnInt  ObjA)
{
	int A = n;
	int B = ObjA.n;

	A = A * B;
	return OwnInt(A);
	
}

OwnInt OwnInt::operator/(OwnInt  ObjA)
{
	int A = n;
	int B = ObjA.n;

	try {
		if (B == 0) 
			throw 1;
		A=A / B;
	}
	catch (int errorNum) {
		std::cout << "Error number: " << errorNum << " - divide by zero." << std::endl;
		A = 0;
	}
		
	return OwnInt(A);
}

OwnInt OwnInt::operator++()
{
	return OwnInt(++n);
}

OwnInt OwnInt::operator--()
{
	return OwnInt(--n);
}

OwnInt OwnInt::operator++(int)
{
	return OwnInt(n++);
}

OwnInt OwnInt::operator--(int)
{
	return OwnInt(n--);
}

std::istream & operator>>(std::istream & is, OwnInt & A)
{
	is >> A.n;
	return is;
}

std::ostream & operator<<(std::ostream & os, const OwnInt & a)
{
	os << a.n;
	return os;
}

bool OwnInt::operator<(OwnInt ObjA)
{
	return n < ObjA.n ? true:false;
}
bool OwnInt::operator>(OwnInt ObjA)
{
	return n>ObjA.n? true:false;
}

bool OwnInt::operator==(OwnInt ObjA)
{
	return n==ObjA.n ? true : false;
}

bool OwnInt::operator!=(OwnInt ObjA)
{
	return n!= ObjA.n ? true :false;
}

void OwnInt::operator+=(OwnInt ObjA)
{
	n += ObjA.n;
}
