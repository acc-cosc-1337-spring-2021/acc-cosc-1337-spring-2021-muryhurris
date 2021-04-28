//Include statements
#include "dna.h"
#include <iostream>

//Using statement
using namespace std;


int main() 
{

	//Declares new variables in the main.cpp file.
	int option;
	string dna;

	while (1)
	{
		//Prompts the user to enter a valid DNA strand.
		cout<<"Enter a DNA String: ";
		cin>>dna;

		//Prompts the user to select an option using '1' or '2' on their keyboard depending on what they would like to do. 
		cout<<"\nSelect an Option: "<<endl;
		cout<<"1. GC Content"<<endl;
		cout<<"2. DNA Complement\n"<<endl;

		//Prompts the user to enter the option they selected.
		cout<<"Enter Option: ";
		cin>>option;

		//If the user picks '1' the GC content of the input DNA strand is given. 
		if (option == 1)
		{
			double content = get_gc_content(dna);
			cout<<"GC Content: "<<content<<endl;
		}

		//If the user picks '2' the complement of the input DNA strand is given.
		else if(option == 2)
		{
			string complement = get_dna_complement(dna);
			cout<<"Complement: "<<complement<<endl;
		}

		//If the user inputs a wrong DNA strand and or option, an error is displayed.
		else
		{
			cout<<"ERROR: Invalid input!"<<endl;
		}
		
		//The character variable 'Answer' is defined.
		char answer;
		//Prompts the user to enter either 'Y' or 'y' to continue the loop.
		cout<<"\nTo Continue Enter (Y/y): ";
		cin>>answer;

		if (answer == 'Y' || answer == 'y')
		{
			cout<<"\n"<<endl;
			continue;
		}
		//If anything other than 'Y' or 'y' is entered, the loop breaks and ends.
		else
		{
			break;
		}
		
	}
	return 0;
}