/*C++ Manipulators
In C++ programming, language manipulators are used in the formatting of output. These are helpful in modifying
the input and the output stream. They make use of the insertion and extraction operators to modify the output.*/
/*Manipulator    Description*/
/*Endl            It is used to enter a new line with a flush.*/
/*setw(a)         It is used to specify the width of the output.*/
/*setpricision(a) It is used to set the precision of floating-point values.*/
/*setbase(a)      It is used to set the base value of a numerical number.*/

/*Let’s see their implementation in C++. Note that we use the header file iomanip for 
some of the manipulators.*/

#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
{
    float PI = 3.14;
    int num = 100;
    cout << "Entering a new line." << endl;
    cout << setw(10) << "Output" << endl;
    cout << setprecision(10) << PI << endl;
    cout << setbase(16) << num << endl; //sets base to 16
}

