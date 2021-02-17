//Write the include statement for decisions.h here
#include "decision.h"


//Write namespace using statements for cout and cin
#include<iostream>
#include<string>
using std::cout; using std::cin; using std::string;


int main() 
{
	int grade;
	
	//Displays the letter grade using the 'switch' function
	cout<<"Enter numerical grade value: ";
	cin>>grade;

	string result = get_letter_grade_using_switch(grade);
	cout<<"Your letter grade is: "<<result<<"\n";
	
	//Displays the letter grade using the 'if' function
	cout<<"Enter numerical grade value: ";
	cin>>grade;
	string letter_grade = get_letter_grade_using_if(grade);
	cout<<"Your letter grade is: "<<letter_grade;

	return 0;
}

