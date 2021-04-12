// GitHubAssignment4.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This program counts the number of occurrence of vowels in 

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <algorithm>


using namespace std;

int main(int argc, char* argv[])
{
	string title = " Welcome to my Letter Count Program ";
	string s = " "; // used during I/O manipulation


	// The executable name and at least one argument?
	if (argc < 2)
	{
		std::cout << "Error with input agrs.." << std::endl;
		return 1;
	}



	// For debugging purposes only
	for (int i = 0; i < argc; i++)
	{
		std::cout << argv[i] << s;
	}


	// display the header of the program, formatted with asterisks
	cout << endl;
	cout << setfill('*');
	cout << setw(66) << s << endl;
	cout << setw(15) << s << title << setw(15) << s << endl;  // title  of the program is displayed
	cout << setw(66) << s << endl;
	cout << endl;


	// opens the file provided in the command line; if it doesn't open successfully, an error message is displayed and terminates
	std::ifstream inFile;
	inFile.open(argv[1]);
	if (!inFile)
	{
		std::cout << "Error with file name.." << std::endl;
		return 1;
	}

	///////////////////////
	// Work here with open file.....
	///////////////////////


	// Displays the name of the file that's passed in command line
	cout << setfill('.');
	cout << "Analyzing file '" << argv[1] << "'" << setw(11) << s << endl;


	// initialize int variables used to count the number of occurence of the vowels

	int a = 0;
	int e = 0;
	int i = 0;
	int o = 0;
	int u = 0;
	int b = 0;
	int c = 0;
	int t = 0;



	char ch;
	inFile >> ch;

	inFile.get(ch);   // reads each of the characters from the file
	//While loop records finds all occurrence of the vowels within the file, increments the counter associated with the vowel.
	while (inFile)
	{
		if (ch == 'A' || ch == 'a')      // if value of the character is an a...
			a++;                         // increments the 'a' counter
		else
			if (ch == 'E' || ch == 'e') // if the value of the character is an e...
				e++;                    // increments the 'e' counter
			else if (ch == 'I' || ch == 'i') // if the value of the character is an i...
				i++;                         // increments the 'i' counter
			else if (ch == 'O' || ch == 'o')	// if the value of the character is an o...
				o++;						// increments the 'o' counter
			else if (ch == 'U' || ch == 'u')	// if the value of the character is an u...
				u++;						// increments the 'u' counter
			else if (ch == 'B' || ch == 'b')	// if the value of the character is an b...
				b++;							// increments the 'b' counter'
			else if (ch == 'C' || ch == 'c')	// if the value of the character is an c...
				c++;							// increments the 'c' counter'
			else if (ch == 'T' || ch == 't')	// if the value of the character is an t...
				t++;							// increments the 't' counter'
		inFile.get(ch);
	}


	//displays the number of each vowel found within the filestream 
	cout << setw(20) << "\nThe number of A's: " << setw(47) << a;
	cout << setw(20) << "\nThe number of E's: " << setw(47) << e;
	cout << setw(20) << "\nThe number of I's: " << setw(47) << i;
	cout << setw(20) << "\nThe number of O's: " << setw(47) << o;
	cout << setw(20) << "\nThe number of U's: " << setw(46) << u;
	cout << setw(20) << "\nThe number of B's: " << setw(46) << b;
	cout << setw(20) << "\nThe number of B's: " << setw(46) << c;
	cout << setw(20) << "\nThe number of T's: " << setw(47) << t;
	cout << setw(20) << "\nThe vowel count is: " << setw(46) << a + e + i + o + u; // displays total number of vowels
	cout << endl;



	inFile.close(); // close the file stream

	return 0;
}
