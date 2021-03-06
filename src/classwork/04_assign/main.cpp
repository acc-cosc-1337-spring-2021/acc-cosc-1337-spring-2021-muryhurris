//write includes statements
#include<iostream>
#include "loops.h"
//write using statements for cin and cout
using std::cout; using std::cin;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	int choice;
	
	
	do
	{
		int num;
		cout <<"Enter a number between 1 and 10 to display it's factorial value: ";
		cin >>num;
		cout <<factorial(num)<<"\n\n";
		
		cout <<"Enter 1 to Continue?: ";
		cin >>choice;
	} while (choice == 1);
	
	return 0;
}