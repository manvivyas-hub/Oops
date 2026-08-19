#include <iostream>
using namespace std;
int main (){
    int dividend;
    int divisor;
    cout<<"Enter the dividend:"<<endl;
    cin>>dividend;      
    cout<<"Enter the divisor:"<<endl;
    cin>>divisor;
    if (divisor==0)
    {
        cout<<"Error: Division by zero is not allowed."<<endl;
    }
    else
    {
        cout<<"The quotient is:"<<dividend/divisor<<endl;
        cout<<"The remainder is:"<<dividend%divisor<<endl;

    }
    return 0;
}
/*why Doesn't the Modulus Operator (%) Work Directly with Doubles in C
The modulus operator (%) in C is primarily used for integer operations. 
When attempting to use the modulus operator on two double variables, an error may occur due to the different behavior of the operator on integers and floating-point numbers. 
In C, the modulus operator (%) calculates the remainder after dividing the left operand by the right operand.
 However, for floating-point numbers, the % operator is not defined. To perform modulus operations on floating-point numbers, the fmod() function is used,
  which returns the floating-point remainder of the division of its first argument by its second argument. 
This function is defined in the header file and provides a convenient alternative for performing modulus operations on floating-point numbers. 
*/