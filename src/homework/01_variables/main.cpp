//write include statements
#include "variables.h"
#include<iostream>

//write namespace using statement for cout

using std::cout; using std::cin;


/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount;
	cout<<"Enter the amount of the meal: ";
	cin>>meal_amount;

	double tax_amount = get_sales_tax_amount(meal_amount);
	
	double tip_rate;
	cin>>tip_rate;

	double tip_amount = get_tip_amount(meal_amount, tip_rate);
	cout<<"Enter a tip amount: ";
	cin>>tip_amount;

	double total;
	double total = tip_amount + tax_amount + meal_amount; 
	
	cout<<"Meal Amount: "<<meal_amount<<;
	cout<<"Sales Tax: "<<tax_amount<<;
	cout<<"Tip Amount: "<<tip_amount<<;
	cout<<"Total: "<<total<<;

	return 0;
}
