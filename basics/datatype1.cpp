#include <iostream>
/* This program simply saves writes the 7 basic datatypes */
using namespace std;
int main( ) 
{
	bool x_bool = true;
	char x_char = 'a';
	short x_short = 32767; 
	int x_int = 2147483647;
	long x_long = 21474893647;
	float x_float = 0.1;
	double x_double = 0.01;

	cout << "Bool\t" << x_bool << endl;
	cout << "Char\t" << x_char << endl;
	cout << "Short\t" << x_short << endl;
	cout << "Int\t" << x_int << endl;
	cout << "Long\t" << x_long << endl;
	cout << "Float\t" << x_float << endl;
	cout << "Double\t" << x_double << endl;
	
	return 0;
}