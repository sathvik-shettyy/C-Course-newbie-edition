//Programing in c++ involes following a basic structure throughout.To understand that basic structure,
//the first program we learned writing in C++ will be refered to:

#include <iostream>
 
int main()
{
    std::cout << "Hello World";
    return 0;
}

//Here's what it can be broken down into 

//Pre-processor commands/ Header files
//Definition Section
//Here, all the variables, or other user-defined data 
//types are declared. These variables are used throughout the program and all the functions.

//FUNCTION DELCARATION
//Function Declaration
//After the definition of all the other entities, here we declare all the functions a program needs. 
//These are generally user-defined.

//Every program contains one main parent function which tells the compiler where to start the execution 
//of the program. 

//All the statements that are to be executed are written in the main function.

//Only the instructions enclosed in curly braces {} are considered for execution by the compiler.

//After all instructions in the main function have been executed, control leaves the main function and 
//the program ends.

//A C++ program is made up of different tokens combined. These tokens include:

//Keywords

//Identifiers

//Constants

///String Literal

//Symbols & Operators

 

//Keywords
//Keywords are reserved words that can not be used elsewhere in the program for naming a variable or 
//a function. They have a specific function or task and they are solely used for that. Their functionalities 
//are pre-defined. 

//One such example of a keyword could be return which is used to build return statements for functions. 
//Other examples are auto, if, default, etc.

//There is a list of reserved keywords which cannot be reused by the programmer or overloaded. One can find 
//the list here, https://en.cppreference.com/w/cpp/keyword. 

 

//Identifiers
//Identifiers are names given to variables or functions to differentiate them from one another. 
//Their definitions are solely based on our choice but there are a few rules that we have to follow 
//while naming identifiers. One such rule says that the name can not contain special symbols such as 
//@, -, *, <, etc.

//C++ is a case-sensitive language so an identifier containing a capital letter and another one 
//containing a small letter in the same place will be different. For example, the three words: Code, code, and cOde can be used as three different identifiers.

 

//Constants
//Constants are very similar to a variable and they can also be of any data type. The only difference 
//between a constant and a variable is that a constant’s value never changes.  We will see constants 
//in more detail in the upcoming tutorials.

 

//String Literal
//String literals or string constants are a sequence of characters enclosed in double quotation marks. 
//Escape sequences are also string literals.

 

//Symbols and Operators
//Symbols are special characters reserved to perform certain actions. Using them lets the compiler know 
//what specific tasks should be performed on the given data. Several examples of symbols are arithmetical 
//operators such as +, *, or bitwise operators such as ^, &.

