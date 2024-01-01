/*C++ Variables
Variables are containers for storing data values.

In C++, there are different types of variables.

Some of them are as follows:

an integer variable defined with the keyword int stores integers (whole numbers), without decimals, 
such as 63 or -1.

a floating point variable defined with keyword float storess floating point numbers, with decimals, 
such as 79.97 or -13.26.

a character variable defined with the keyword char stores single characters, such as 'A' or 'z'. 
Char values are bound to be surrounded by single quotes.

a boolean variable defined with the keyword bool stores a single value 0 or 1 for false and true respectively.

 

Declaration
We cannot declare a variable without specifying its data type. The data type of a variable depends on what
 we want to store in the variable and how much space we want it to hold. The syntax for declaring a variable
  is simple:*/

data_type  variable_name;
//OR
data_type  variable_name = value;

/*Naming a Variable
There is no limit to what we can call a variable. Yet there are specific rules we must follow while naming a variable:

A variable name in C++ can have a length of range 1 to 255 characters

A variable name can only contain alphabets, digits, and underscores(_).

A variable cannot start with a digit.

A variable cannot include any white space in its name.

Variable names are case sensitive

The name should not be a reserved keyword or any special character. 

 

Variable Scope
The scope of a variable is the region in a program where the existence of that variable is valid. 
Based on its scope, variables can be classified into two types:

 

Local variables:
Local variables are declared inside the braces of any function and can be assessed only from that
 particular function. 

 

Global variables:
Global variables are declared outside of any function and can be accessed from anywhere.

 

An example that demonstrates the difference in applications of a local and a global variable is given 
below.*/

#include <iostream>
using namespace std;
 
int a = 5; //global variable
 
void func()
{
    cout << a << endl;
}
 
int main()
{
    int a = 10; //local variable
    cout << a << endl;
    func();
    return 0;
}


//Output will be 10 and 5

/*Explanation: A local variable a was declared in the main function, and when printed, 
gave 10. This is because, within the body of a function, a local variable takes precedence 
over a global variable with the same name. But since there was no variable declared in the func function, 
it considered the global variable a for printing, and hence the value 5.

 

A variable, as its name is defined, can be altered, or its value can be changed, but the same is not 
true for its type. If a variable is of integer type, it will only store an integer value through a 
program. We cannot assign a character type value to an integer variable. We can not even store a decimal 
value into an integer variable.*/
