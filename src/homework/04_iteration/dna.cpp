//Include statements
#include "dna.h"
#include<string>

//Using statements
using namespace std;

//Code for function 'get_gc_content' that accepts a const reference string parameter and returns a double.
//This function calculates the GC content of a DNA strand. 
double get_gc_content(const std::string &dna)
{
    //Creates the variables for the Gs and Cs to be counted. 
    double g_content = 0;
    double c_content = 0;
    
    //Iterate string counts the Gs and Cs in the DNA strand.
     for(int i = 0; i < dna.length(); i++)
    {
        if(dna[i] == 'G')
            g_content++;
        if (dna[i] == 'C')
            c_content++;
    }
    //Divides the GC count by the DNA length and returns the quotient.
    return (g_content + c_content) / dna.length();
}




//Code for function 'get_reverse_string' that accepts a string parameter and returns a string reversed. 
std::string get_reverse_string(std::string dna)
{
    //Creates the variable 'reverse' to be used to reverse the input DNA strand. 
    std::string reverse ="";

    //Iterate string goes through the input characters and reverses them.
    for (int i = dna.length()-1; i>=0; i--)
    {
        reverse += dna[i];
    }
    //Returns the 'reverse' variable.
    return reverse;
}


//Code for function 'get_dna_complement' that accepts a string and returns a string. 
std::string get_dna_complement(std::string dna)
{
    //Calls the function 'get_reverse_string(dna)' and saves the result to a local string variable within the function.
    std::string reverse2 = get_reverse_string(dna);
    //Creates a string variable 'complement'.
    std::string complement = "";

    //Iterate local string variable replaces the characters in the strand of DNA to it's corresponding complement. 
    //A is replaced with T
    //T is replaced with A
    //C is replaced with G
    //G is replaced with C

    for (int i = 0;i < reverse2.length(); i++)
    {
        //A is replaced with T
        if (reverse2[i] == 'A')
        {
            complement +='T';
        }
        //T is replaced with A
        if (reverse2[i] == 'T')
        {
            complement +='A';
        }
        //C is replaced with G
        if (reverse2[i] == 'C')
        {
            complement +='G';
        }
        //G is replaced with C
        if (reverse2[i] == 'G')
        {
            complement +='C';
        }
  
    }
    //Returns the complement string. 
    return complement;
}
