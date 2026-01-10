#include <iostream>
using namespace std;
int main()
{
	char a = 1;
	cout << "Size of integer : " << sizeof(int) << endl << "Size of a : " << sizeof(a) << endl;

	bool b;
	cout << "Size of bool : " << sizeof(float) << endl << "Size of b : " << sizeof(b) << endl;

	short c = 3;
	cout << "Size of short : " << sizeof(short) << endl << "Size of c : " << sizeof(c) << endl;

	float d = 5.5;
	cout << "Size of float : " << sizeof(float) << endl << "Size of d : " << sizeof(d) << endl;

	double e = 3.45;
	cout << "Size of double: " << sizeof(double) << endl << "Size of e : " << sizeof(e) << endl;

	long double f = 15467893.1546;
	cout << "Size of long double : " << sizeof(long double) << endl << "Size of f : " << sizeof(f) << endl;

	wchar_t g = L'A';
	cout << "Size of wide character : " << sizeof(wchar_t) << endl << "Size of g : " << sizeof(g) << endl;

	return 0;
}