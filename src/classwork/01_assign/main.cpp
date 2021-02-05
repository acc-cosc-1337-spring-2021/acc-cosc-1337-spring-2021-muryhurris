//Write the include statement for types.h here
#include "types.h"
//Write include for capturing input from keyboard and displaying output to screen
#include <iostream>
using std::cout;  using std::cin;


int main() 
{
	int num;
	cout<<"Enter a Number: ";
	cin>>num;

	int result = multiply_numbers(num);
	cout<<"Result: "<<result<<"\n";

	int num1 = 4;
	int result2= multiply_numbers(num1);
	cout<<"Result 2: "<<result2<<"\n";
	
	
	return 0;
}

