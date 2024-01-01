/*C++ Comments
A comment is a human-readable text in the source code, which is ignored by the compiler. Comments can be used to insert any informative piece which a programmer does not wish to be executed. It could be either to explain a piece of code or to make it more readable. In addition, it can be used to prevent the execution of alternative code when the process of debugging is done.

Comments can be singled-lined or multi-lined.

Single Line Comments
Single-line comments start with two forward slashes (//).

Any information after the slashes // lying on the same line would be ignored (will not be executed) since they become unparsable. 

An example of how we use a single-line comment*/

#include <iostream>
 
int main()
{
    // This is a single line comment
    std::cout << "Hello World";
    return 0;
}


/*Multi-line comments
A multi-line comment starts with /* and ends with */.

/*Any information between /* and */ //will be ignored by the compiler.*/

//An example of how we use a multi-line comment*/

#include <iostream>
 
int main()
{
    /* This is a
    multi-line
    comment */
 
    std::cout << "Hello World";
    return 0;
}
