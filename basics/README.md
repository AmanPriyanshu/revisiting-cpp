# Basics:

Well let's break each statement one by one:

```cpp

#include <cstdlib>
#include <iostream>
/* This program inputs two numbers x and y and outputs their sum */
int main( ) 
{
	int x, y;
	std::cout << "Please enter two numbers: ";
	std::cin >> x >> y;
	// input x and y
	int sum = x + y;
	// compute their sum
	std::cout << "Their sum is " << sum << std::endl;
	// terminate successfully
	return 0;
}

```

So, now lets begin with imports:

```cpp
#include <cstdlib>
```

The C++ <cstdlib> header file declares a set of general-purpose functions such as: atof() to convert string to double. It also contains a few mathematical functions.
Although we have not used any, so you can comment it out. The following functions are imported when this is used:

1. C++ abs()

returns absolute value of an integer

2. C++ atexit()

registers function to be called on termination

3. C++ atof()

Converts String to Double

4. C++ atol()

Converts String to Integer

5. C++ at_quick_exit()

registers function and calls on quick termination

6. C++ bsearch()

performs binary search on sorted array

7. C++ calloc()

allocates block of memory and initializes to zero

8. C++ div()

computes integral quotient and remainder of number

9. C++ free()

deallocates a block of memory

10. C++ getenv()

returns pointer to environment variable passed

11. C++ labs()

returns absolute value of long or long int number

12. C++ ldiv()

computes integral division of long int numbers

13. C++ llabs()

returns absolute value of a long long int data

14. C++ lldiv()

computes integral division of two long long int.

15. C++ malloc()

allocates a block of unitialized memory

16. C++ mblen()

determines size of a multibyte character

17. C++ mbstowcs()

converts multibyte char string to wide char seq

18. C++ mbtowc()

converts multibyte character to a wide character

19. C++ qsort()

sorts array using quick-sort algorithm

20. C++ quick_exit()

causes termination without cleaning resources

21. C++ realloc()

reallocates a block of previously allocated memory

22. C++ srand()

seeds pseudo random number for rand()

23. C++ strtod()

returns string float to double

24. C++ strtol()

Converts a string to number

25. C++ strtoll()

converts string to long long int in C++

26. C++ strtoull()

converts string to unsigned long long int

27. C++ wcstombs()

converts wide character string to multibyte seq

28. C++ wctomb()

converts wide character to a multibyte character

29. C++ _Exit()

causes termination without cleanup tasks

```cpp
#include <iostream>
```

It is the predefined library function used for input and output also called as header files. iostream is the header file which contains all the functions of program like cout, cin etc.

```cpp
int x, y;
```

basically defines x and y

```cpp
std::cout << "Please enter two numbers: ";
```

Writes out to the terminal

```cpp
std::cin >> x >> y;
```

Takes input.

That's it a better implementation is on `sum1`.

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

## OUTPUT:

```console
user@user:~/Desktop/programming_cpp/revisiting-cpp/basics$ sudo g++ -o sum sum.cpp
user@user:~/Desktop/programming_cpp/revisiting-cpp/basics$ ./sum
Please enter two numbers: 4 5
Their sum is 9
ddos@user:~/Desktop/programming_cpp/revisiting-cpp/basics$ 

```
