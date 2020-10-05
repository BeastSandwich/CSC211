#include <iostream>
#include <fstream>

using namespace std;

// Function definitions

void arrayToFile(string filename, int *arrPtr, int size);
void fileToArray(string filename, int *arrPtr, int size);

int main ()
{
	int size;
	
	cout << "How many numbers will be in the Array?" <<endl;
	cin  >> size;
	
	string inputFile = "Test.dat";
	int arr1[size];
	
	for (int i = 0; i < size; i++)
	{ 
		cout << "Array Element " << (i + 1) << ": " << endl;
		cin  >> arr1[i];
	}
	
	int arr2[size];
	
	arrayToFile(inputFile, arr1, size);
	fileToArray(inputFile, arr2, size);
	
	return 0;
}

/*
	What are you doing in arrayToFile?
	
	ArrayToFile is a function where we take an array from the 
	main int and print it to the output file. We basically print
	numbers in binary form to a text file. Can be refitted into 
	a character array through messing with the array to be a char
	array.
*/
void arrayToFile(string fileName, int *arrPtr, int size)
{
	// What's being written to the file?
	
	cout << "The Numbers being written to the File are: " <<endl;
	
	// Use a for loop to the step through the Arr(ay) and 
	// Announce all contents of the array.
	
	for (int i = 0; i < size; i++)
	{
		cout << arrPtr[i] << ", ";
	}
	cout << endl;
	
	// Declaring the output file
	ofstream outfile;
	
	// Open the file, 
	// You can't work in a house without going indoors, right?
	outfile.open(fileName.c_str(), ios::binary | ios::out);
	
	// Use a for loop to step through the Array and write each
	// Array item followed by a space. Finish for loop when
	// the counter, "i", reaches the size of the Array "size".
	for (int i = 0; i < size; i++)
	{
		outfile << arrPtr[i] << " ";
	}
	
	// You wouldn't leave your home without locking it, right?
	// Same applies to a file, close the door (File).
	outfile.close();
}

/*
	What is File to array?
	Think the previous arrayToFile, but inverse.
	It displays everything from a binary text file as an array.
*/
void fileToArray(string fileName, int *arrPtr, int size)
{
	// Ifstream and Infile both mean 
	// "Input File Stream" and "Input File" respectively.
	// These are used in place of ofstream and outfile because we are
	// Getting Data from the file, not the other way around.
	
	ifstream infile;
	infile.open(fileName.c_str(), ios::binary | ios::in);
	
	// Step through the array to display 
	// all elements through the compiler.
	for (int i = 0; i < size; i++)
	{
		cout << arrPtr[i] << " ";
	}
	
	// Don't let the door hit you on the way out!
	infile.close();
}