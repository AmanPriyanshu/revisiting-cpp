# BASICS:

## 1. [NOTES](https://github.com/AmanPriyanshu/revisiting-cpp/blob/master/basics/notes.md):

My notes don't use don't implement highly prone to errors. I will most likely copy definitions from places on the internet or books I like.

## 2. [DataTypes]():

data types.

## 3. [SUM](https://github.com/AmanPriyanshu/revisiting-cpp/blob/master/basics/SUM.md):

Adds 2 numbers

code:
```cpp
//#include <cstdlib>
#include <iostream>
/* This program inputs two numbers x and y and outputs their sum */
using namespace std;
int main( ) 
{
	int x, y;
	cout << "Please enter two numbers: ";
	cin >> x >> y;
	// input x and y
	int sum = x + y;
	// compute their sum
	cout << "Their sum is " << sum << endl;
	// terminate successfully
	return 0;
}

```

Output:

```console
user@user:~/Desktop/programming_cpp/revisiting-cpp/basics$ ./sum
Please enter two numbers: 5 6
Their sum is 11
user@user:~/Desktop/programming_cpp/revisiting-cpp/basics$ 

```
