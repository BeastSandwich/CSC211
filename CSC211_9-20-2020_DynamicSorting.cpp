/* This Program shows the donations made to the United Cause
   by the employees of CK Graphics, Inc. It displays the 
   donations in order from lowest, to highest, and in the
   original order they were recieved.
*/

#include <iostream>
#include <string>
using namespace std;

//Function Prototypes.
void arrSelectSort(int *[], int);
void showArray(const int [], int);
void showArrPtr(int *[], int);

int main ()
{
	// Get Number of Donations.
	int NUM_DONATIONS;
	
	cout << "Enter the Amount of Donations. " << endl;
	cin >> NUM_DONATIONS;
	
	int *donations = nullptr;

  donations = new int[NUM_DONATIONS];
	// Get Donations
	
	for (int count = 0; count < NUM_DONATIONS; count++)
	{ 
		cout << "Donation #" << (count + 1) << ": " << endl;
		cin  >> donations[count];
	}
	
  // I have no idea how to make nullptrs based on user input. 
  // If you could please comment how to, it would help me a lot!
   
  int *arrPtr[]= {nullptr, nullptr, nullptr, nullptr, nullptr, 
				  nullptr, nullptr, nullptr, nullptr, nullptr, 
				  nullptr, nullptr, nullptr, nullptr, nullptr, 
				  nullptr, nullptr, nullptr, nullptr, nullptr, 
				  nullptr, nullptr, nullptr, nullptr, nullptr, 
				  nullptr, nullptr, nullptr, nullptr, nullptr};
	
	// Each element of arrPtr is a pointer to int.
	// Make each element point to an element in the donations array.
	
	for (int count = 0; count < NUM_DONATIONS; count++)
		arrPtr[count] = &donations[count];
	
	// Sort the elements of the array of pointers.
	arrSelectSort(arrPtr, NUM_DONATIONS);
	
	// Display the donations using an array of pointers.
	// This will display them in a sorted order.
	cout << "The Donations, assorted in ascending order, are " << endl;
  showArrPtr(arrPtr, NUM_DONATIONS);
  cout << endl;

  // This displays them in the original order.
	cout << "The Donations, sorted in their original order, are:" << endl;
	showArray(donations, NUM_DONATIONS);
	
  delete [] donations;
  donations = nullptr;
	return 0;
}
	
	/*
		What Does arrSelectSort even do?
		
		arrSelectSort preforms an ascending order selection sort on
		arrPtr, which is an array of pointers. Each element of this array
		points to an element of the second array, donations[]. After the
		sort, arrPtr will point to the elements of the second array in
		ascending order.
		
	*/
	
void arrSelectSort(int *arr[], int size)
{
	int startScan, minIndex;
	int *minElem;
	
	// For loop to scan through the array.
	// startScan is compared to size - 1 
	// because any int includes 0.
	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		// minIndex assigned to 0, or startScan.
		minIndex = startScan;
		// minElem assigned to array startScan, or 0.
		minElem = arr[startScan];
		
		// Embedded for loop to assign minElem to arr[index]
		// and minIndex to index. making minElem end up being
		// minElem = arr[minIndex.]
		for(int index = startScan + 1; index < size; index++)
		{
			if (*(arr[index]) < *minElem)
			{
				minElem = arr[index];
				minIndex = index;
			}
		}
		
		arr[minIndex] =  arr[startScan];
		arr[startScan] = minElem;
	}
}

/*
	What does showArray do?
	It displays the contents of the array, arr. 
	Size is the number of elements. 
	
	I don't know what I expected.
*/

void showArray(const int arr[], int size)
{
	// for loop to step through arr[count] to announce the numbers.
	
	for (int count = 0; count < size; count++)
		cout << arr[count] << " ";
	cout << endl;
}

/*
	What does showArrPtr do?
	
	This function displays the contents 
	of the array pointed to by arr.
	size is the number of elements.
*/

void showArrPtr(int *arr[], int size)
{
	for(int count = 0; count < size; count++)
		cout << *(arr[count]) << " ";
	cout << endl;
}