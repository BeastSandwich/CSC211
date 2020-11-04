#include <iostream>
using namespace std;

// Function Prototypes.
void bubbleSort(int emplID[], int n);
void selectionSort(int emplID[], int n);
void swapping(int &a, int &b);
void insertionSort(int emplID[], int n);

/*
	This is a C++ Program made to use Sorting Algorithms,
	"Bubble Sort," "Insertion Sort," and "Selection Sort."
	as well as display all data on how it handles sorting.
	It will announce every single swap it makes, as well as
	which algorithm it is.
*/

int main()
{
	// Array Size.
	int size = 8;

	// The numbers listed.
	int emplID[] = {2, 3, 9, 5, 4, 7, 8, 3};
	
  // Announce to the user what the EMPLID is.
  cout << "The emplID unsorted is: ";
  
  // For Loop to step through the array.
  for(int k = 0; k < size; k++)
  {
    cout << emplID[k];
  }
  
  // End the line for a better presentation.
  cout << endl;
	
  // Call the Function SelectionSort.
  selectionSort(emplID, size);
  // Call the Function Bubblesort.
  bubbleSort(emplID, size);
  // Call the Function InsertionSort.
  insertionSort(emplID, size);
  
  return 0;
}

/*
  SelectionSort
  Basic Algorithm for sorting data, which starts at the start of 
  the array. Assigning the first member to the minimum postiton.
  and then comparing the minimum position to the next member, until it is all sorted.
*/
void selectionSort(int emplID[], int n)
{
  // Variables tasked with assigning the minimum 
  // position and swapping numbers respectively.
  int pos_min;
  int temp;

  cout << "Showing Changes from Selection Sort: " << endl << endl;
	for (int i = 0; i < (n-1); i++)
	{
		// Set Minimum Position (pos_min) to current index of array.
		pos_min = i;
		
    // Embedded for loop to check if the current position is less than
    // The established minimum position.
		for (int j = (i + 1); j < n; j++)
		{
			if (emplID[j] < emplID[pos_min])
			{
        cout << emplID[j] << " will be swapped with " << emplID[pos_min];
        cout << endl;
        // Assign the minimum position to the current variable.
				pos_min = j;
			}
		}

    // If the minimum position is not the current array member,
		if (pos_min != i)
		{
      // Assign the temporary Variable to the current member,
			temp = emplID[i];
      // The Current member is then overwritten by the minimum position.
			emplID[i] = emplID[pos_min];
      // Temporary Variable is sent the the minimum position.
			emplID[pos_min] = temp;
		}
	}
  
  cout << endl << endl;
  // Announce to the user their resorted numbers.
  cout << "The Resorted emplID (Via Selection Sort) is: ";
  
  for(int k = 0; k < n ; k++ )
  {
  	cout << emplID[k];
  }
  
  cout << endl;
}

/*
  Bubble Sorting:
  Both "swapping" and "bubbleSorting" are both used to bubble sort.
  They step through the array to swap the members to descending order.
*/

void swapping(int &a, int &b)
{
  // Temporary variable
	int temp;
  // integer a is assigned to the temporary variable.
	temp = a;
  // a is then swapped to b.
	a = b;
  // b is then assigned to (what was formerly) a.
	b = temp;
}

void bubbleSort(int emplID[], int n)
{	
  cout << endl << "Bubble Sorting:" << endl;
  // For loop to step through the array for the bubble sort.
	for (int i = 0; i < n; i++)
	{
		// Flag to detect any Swap.
		int swaps = 0;
		
    // Embedded for loop to announce the swap.
		for(int j = 0; j < (n-i-1); j++)
		{
      // Embedded if loop to say there was a swap.
			if(emplID[j] < emplID[j+1])
			{
        cout << emplID[j] << " will be swapped with " << emplID[j+1] << endl;
        swapping(emplID[j], emplID[j+1]);
        swaps = 1;
			}
		}

    // If there are no swaps, break the loop.
		if (!swaps)
		{
      cout << endl;
			break;
		}
	}

  // Announce the emplID
  cout << endl << "The Resorted emplID (Via Bubble Sort) is: ";
  for (int i = 0; i < n; i++)
  {
    cout << emplID[i];
  }
  
  cout << endl;
}

void insertionSort(int emplID[], int n)
{
  cout << endl << "Insertion Sort: " << endl << endl;

	for (int i = 1; i < n; i++)
	{
		int key = emplID[i];
		int j = i -1;
		
		while (key < emplID[j] && j>= 0)
		{
      cout << key << " will be swapped with " << j << endl;
			emplID[j+1] = emplID[j];
			--j;
		}
		emplID[j+1] = key;
	}

  cout << endl << "The Resorted emplID (Via Insertion Sort) is ";
  for (int i = 0; i < n; i++)
  {
    cout << emplID[i];
  }
}