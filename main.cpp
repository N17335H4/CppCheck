/*
Dead pointers
Invalid bit shift operands
Memory management
Null pointer dereferences
Writing const data
>Automatic variable checking
Classes checking (e.g.  and memory duplication)
Usage of deprecated or superseded functions according to Open Group[3]
Exception safety checking, for example usage of memory allocation and destructor checks
Dead code elimination using unusedFunction option
Miscellaneous stylistic and performance errors
*/

#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
using namespace std;

//unused function
void empty_function() {}

// function with memory leak
void func_to_show_mem_leak()
{
    int* ptr = new int(5);
    return; // return without deallocating ptr
}

int main(int argc, char const *argv[])
{
	int zero = 0, num;
	char alphabet = 'c';

	//Division by zero
	int division_by_zero = 5/zero;

	//Uninitialized variable
	int uninitialized_var_access = num;

	//Invalid conversions: char -> int
	zero = alphabet;

	//BOUNDS CHECKING
	//Index checking: array element access of index out of bound
	int out_of_bounds_array[] = {0,1,2};
	num = out_of_bounds_array[3]; 	//unUsed Variable

	//Invalid usage of STL
	vector<int> vecArr;
    for(int i = 1; i <= 10; i++)
        vecArr.push_back(i);
    auto it = vecArr.begin();
    for(; it != vecArr.end(); it++)
        cout<<(*it)<<"  ";
    cout<<std::endl;
    it = vecArr.begin();
    // Insert an element in position 2,
    vecArr.insert ( it + 2 , 1 , 200 );
    // Now old iterator it has become invalidated. So, using it as it is can result in undefined behavior
    for(; it != vecArr.end(); it++)   // Undefined Behavior
        cout<<(*it)<<"  ";          // Undefined Behavior
 
    //Memory Leak, e.g. due to lost scope without deallocation
    func_to_show_mem_leak();
	return 0;
}