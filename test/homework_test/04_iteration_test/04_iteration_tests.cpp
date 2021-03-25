#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.cpp"
#include <string>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

//Test case to test the 'get_dna_complement' function.
TEST_CASE("Test 'get_dna_complement' function, TEST 1")
{
	//Implement the variable 'dna' as a string.
	
	string dna;
	//Prompts the user to enter in 'AAAACCCGGT' to find the strands' complement strand.
	cout<<"Enter in the DNA String of 'AAAACCCGGT': ";
	cin>>dna;
	
	//Calls the 'get_dna_complement' function.
	string complement = get_dna_complement(dna);
	REQUIRE(complement == "ACCGGGTTTT");

}

//Test case to test the 'get_dna_complement' function.
TEST_CASE("Test 'get_dna_complement' function, TEST 2")
{
	//Implement the variable 'dna2' as a string.
	string dna2;
	
	//Prompts the user to enter in 'CCCGGAAAAT' to find the strands' complement strand.
	cout<<"Enter in the DNA String of 'CCCGGAAAAT': ";
	cin>>dna2;
	
	//Calls the 'get_dna_complement' function.
	string complement2 = get_dna_complement(dna2);
	REQUIRE(complement2 == "ATTTTCCGGG");

}

//Test case to test the 'get_reverse_string' function.
TEST_CASE("Test 'get_reverse_string' function, TEST 1")
{
	//Implement the variable 'dna3' as a string.
	string dna3;
	
	//Prompts the user to enter in 'AGCTATAG' to reverse it.
	cout<<"Enter in the DNA String of 'AGCTATAG': ";
	cin>>dna3;
	
	//Calls the 'get_reverse_string' function. 
	string reverse = get_reverse_string(dna3);
	REQUIRE(reverse == "GATATCGA");

}
//Test case to test the 'get_reverse_string' function.
TEST_CASE("Test 'get_reverse_string' function, TEST 2")
{
	//Implement the variable 'dna4' as a string.
	string dna4;
	
	//Prompts the user to enter in 'CGCTATAG' and reverse it. 
	cout<<"Enter in the DNA String of 'CGCTATAG': ";
	cin>>dna4;
	
	//Calls the 'get_reverse_string' function. 
	string reverse2 = get_reverse_string(dna4);
	REQUIRE(reverse2 == "GATATCGC");

}

TEST_CASE("Test 'get_gc_content' function, TEST 1")
{
	//Implement the variable 'dna5' as a string.
	string dna5;
	
	//Prompts the user to enter in 'AGCTATAG'and test it's GC content.
	cout<<"Enter in the DNA String of 'AGCTATAG': ";
	cin>>dna5;
	
	//Calls the 'get_gc_content' function.
	double gc_content =  get_gc_content(dna5);
	REQUIRE(gc_content == .375);

}

TEST_CASE("Test 'get_gc_content' function, TEST 2")
{
	//Implement the variable 'dna6' as a string.
	string dna6;
	
	//Prompts the user to enter in 'CGCTATAG'and test it's GC content.
	cout<<"Enter in the DNA String of 'CGCTATAG': ";
	cin>>dna6;
	
	//Calls the 'get_gc_content' function.
	double gc_content2 =  get_gc_content(dna6);
	REQUIRE(gc_content2 == .50);

}
