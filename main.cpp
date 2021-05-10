/*
Dead pointers


Invalid bit shift operands

Invalid usage of STL
Memory management
Null pointer dereferences


Writing const data

>Automatic variable checking

Classes checking (e.g. s, variable initialization and memory duplication)
Usage of deprecated or superseded functions according to Open Group[3]
Exception safety checking, for example usage of memory allocation and destructor checks
Memory leaks, e.g. due to lost scope without deallocation

Invalid usage of Standard Template Library functions and idioms
Dead code elimination using unusedFunction option
Miscellaneous stylistic and performance errors
*/

#include <iostream>
#include <fstream>
using namespace std;

//unused function
void empty_function(){
	for (int i = 0; i < 3; ++i)
	{
	}
}

int main(int argc, char const *argv[])
{
	int zero = 0, num;
	char alphabet = 'c';
	string str = "String";

	//Division by zero
	int division_by_zero = 5/zero;

	//Uninitialized variables
	int uninitialized_variable = num;

	//Integer Overflows: maximum value of "int" is 2147483647
	int out_of_range_integer = 2147483648;

	//Invalid conversions
	//char -> int
	zero = alphabet;

	//BOUNDS CHECKING
	//Range checking: 
	signed var_t a=100,b=50,signed_var_sum;
	unsigned var_t c=200,d=100,unsigned_var_sum;
	signed_var_sum = a+b;
	unsigned_var_sum = c+d;
	//Index checking: array element access of index out of bound
	int out_of_bounds_array[] = {0,1,2};
	out_of_bounds_array[3] = 3;

	//Resource leaks, e.g. due to forgetting to close a file handle
	fstream myfile;
	myfile.open('example.txt');
	myfile << "Entered this to file.";
	return 0;
}