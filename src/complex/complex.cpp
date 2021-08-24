//Exercise 3.3 Finding the roots of quadratic equations
#include <iostream>	// contains the definition of cout, endl
#include <complex>	// contains the complex class definition
#include <cmath>

using namespace std; // cout, endl, complex are all part of this namespace
using Complex= std::complex<int>;

void roots(Complex &a, Complex &b, Complex &c)
{
        Complex root1=(-b+sqrt(b*b - 4*a*c) ) /2*a ;
        Complex root2=(-b-sqrt(b*b  - 4*a*c) )  /2*a;
        
        cout<<"The first root is: "<<root1.real()<< " + " << root1.imag()<<"j"<<endl; 
        cout<<"The second root is: "<<root2.real()<< " + " << root2.imag()<<"j"<<endl; 
 
}
int main()
{

	Complex a=0;
    Complex b=0;
    Complex c=0;
    //now to ask if user wants to continue
    char yesNo= 'x';
    
   while( yesNo!='q')
   {
       cout<<"Enter values for a,b and c to calculate the roots"<<endl;
        cin>>a>>b>>c;
        roots(a,b,c);
        cout<<" Do you wish to calculate roots again?"<<endl;
        cout<<" To quit enter 'q'. To continue enter any button"<<endl;
        cin>>yesNo;
   }
    
	return 0;
}