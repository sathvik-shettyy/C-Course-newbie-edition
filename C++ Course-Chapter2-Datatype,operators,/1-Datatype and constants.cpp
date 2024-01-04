/*C++ Datatype and Constant
C++ Datatypes
Data type define the type of area data can hold; for example an integer variable can hold an integer data,
a character can hold a character data etc.
Data types in C++ are categorized into three groups: 

Built-in data types
these data type are pre defined for a language and could be used directly by the programmer 
example: int,float,char,double,boolean

user-defined data type
these datatype are defined by the user itself 
Examples are class,struct,union,enum

DERIVED DATA TYPES
These datatypes are derived from the primitive built-in type of datatypes
Examples: are: array,pointer,funtion

Some of the popular built in datatype examples are: Array,pointer,Function


C++ CONSTANT
Constants are unchangeable; when are constant variable is initialized in a program, its value cannot be 
cchanged afterwards::*/
#include<iostream>
using namespace std;

int main() {
    const float PI = 3.14;
    cout << "The value of PI is" << PI << endl;
    PI = 3.00; // error, since changing a const variable is not allowed
}

//output: error: assignment of read-only variable 'PI'