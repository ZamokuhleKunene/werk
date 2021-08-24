// complex.cpp
// Multiplying complex numbers

#include <iostream>	// contains the definition of cout, endl
#include <complex>	// contains the complex class definition
//Exercise 3.1 : I think the commented code "(curly braces)" does not run because it has not been defined
using namespace std; // cout, endl, complex are all part of this namespace
// Exercise 3.2 :
using Complex= std::complex<float>;

int main()
{
	Complex num1 = {2.0, 2.0};  // use auto for type deduction
	Complex num2 = {4.0, -2.0}; // use uniform initialisation syntax (curly braces)

	Complex answer = num1 * num2; // type deduced for 'answer' is: complex<float>

	cout << "The answer is: " << answer << endl;
	cout << "Or in a more familiar form: " << answer.real() 
			<< " + " << answer.imag() << "j" 
			<< endl	<< endl;

	// answer++;

	return 0;
}

