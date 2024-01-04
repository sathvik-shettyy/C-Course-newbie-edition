/* C++ Operator 
special symbols that are used to perform actions or operations are known as operators. 
they could be both Unary Or Binary.For example the symbol + is used to perform addition in C++ when 
Put in between two numbers, so it is a binary operator.There are different type of operators.They are
as follows: 
ARITHMETIC OPERATOR
Arithmetic operator are used to perform mathematical operations such as addition, subtraction,etc. They could
be both binary and unary.
Let's see thier implementation in C++: */

#include <iostream>
using namespace std;

int main() 
{
    int a = 4, b = 5;
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a / b is " << a / b << endl;
    cout << "The value of a % b is " << a % b << endl;
    cout << "The value of a++ is " << a++ << endl;
    cout << "The value of a-- is " << a-- << endl;
    cout << "The value of ++a is " << ++a << endl;
    cout << "The value of --a is " << --a << endl;
}

/* Relational Operator
Relational Operator are used to check the relationship betweeen two operands and to compare two or more numbers
or even expression in some cases.The return type of relational Operator is a boolean that is ,either true
or false(1 or 0)*/

//Lets see thier imprementation in C++:
#include <iostream>
using namespace std;

int main() 
{
    int a = 4,b = 5;
    cout << "The value of a==b is " << (a == b) << endl;
    cout << "The value of a < b is " << (a < b) << endl;
    cout << "The value of a > b is " << (a > b) << endl;
}

/*Logical Operator
Logical Operator is used to check whether an expression is true or false.There are three logical operators 
i.e AND,OR NOT.They can be used to compare boolean values but are mostly used to compare expressions to ssee
whether they are satisfying or not
AND:It returns true when both operands are true or 1
OR: It returns true when iether operand is true or 1
NOT: It is used to reverse the logical state of the operand and is true when the operand is false*/