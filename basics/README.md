# BASICS:

## 1. [SUM](https://github.com/AmanPriyanshu/revisiting-cpp/blob/master/basics/SUM.md):

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
