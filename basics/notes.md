# Notes:

First things first Datatypes.

## Datatypes:

Definition:

```console
A particular kind of data item, as defined by the values it can take, 
the programming language used, or the operations that can be performed on it.
```

The basic ones are:

1. bool: `Boolean value, either true or false`
2. char: `character`
3. short: `short integer`
4. int: `integer`
5. long: `long integer`
6. float: `single-precision floating-point number`
7. double: `double-precision floating-point numbe`

Example:

Code:
```cpp
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
```


Output:

```console:
user@user:~/Desktop/programming_cpp/revisiting-cpp/basics$ sudo g++ -o dt datatype1.cpp
user@user:~/Desktop/programming_cpp/revisiting-cpp/basics$ ./dt
Bool	1
Char	a
Short	32767
Int	2147483647
Long	21474893647
Float	0.1
Double	0.01
user@user:~/Desktop/programming_cpp/revisiting-cpp/basics$ 
```

The table below is an easy descryption for every simple datatype.
![relative path is wrong](https://github.com/AmanPriyanshu/revisiting-cpp/blob/master/basics/datatypes_in_cpp.png)


