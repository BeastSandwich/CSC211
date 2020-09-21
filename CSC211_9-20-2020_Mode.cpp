#include <iostream>
using namespace std;

// Function Prototypes
void mode(int arr[], int n);
void bubbleSort(int arr[], int size);

int main() 
{
  int *arr = nullptr;
  int list;

  // Ask the user for the amount of numbers in the array.
  cout << "Please enter the amount of numbers in the array." << endl;
  cin >> list;

  arr = new int[list];

  // Ask user for the numbers in the array.
  cout << "Enter the numbers in the array." << endl;

  for (int count = 0; count < list; count ++)
  { 
    cout << "Number " << (count + 1) << ": ";
    cin >> arr[count];
  }
  
  bubbleSort(arr,list);
  mode(arr,list);

  return 0;
}

void bubbleSort(int arr[], int size)
{
 bool exchanges;
 do
  {
   // By default, no exchanges are made to the list.
   exchanges = false; 
   // Check if there SHOULD be exchanges made.
   for(int i = 0; i < size - 1; i++)
    {
       if(arr[i] > arr[i + 1])
        {
          // Check the array position is equal to the one above.
          double temp = arr[i];
          arr[i] = arr[i+1];

          // Exchange the position in the list,
          // store array[i+1] in a temporary int and move it.
          arr[i+1] = temp;
          exchanges = true;
          
          // After exchange, must check again
        }
    }
 }
 while(exchanges);
}

void mode(int arr[], int n)
{  
    // Finding the max frequency  
    int max_count = 1, res = arr[0], count = 1;

    // For loop stepping through the array 
    for (int i = 1; i < n; i++) 
    { 
      // If the array slot is equal to the one behind it,
      // Continue.
        if (arr[i] == arr[i - 1]) 
          {
            count++; 
          }

      // If the count is larger than max_count,
      // the max count is equal to count, and the
      // Mode is equal to the arr[i - 1]
        else { 
            if (count > max_count) 
            { 
                max_count = count; 
                res = arr[i - 1]; 
            } 
            count = 1; 
        } 
    } 
  
    // When the last element is most frequent
    if (count > max_count) 
    { 
        max_count = count; 
        res = arr[n - 1]; 
    } 
    
    cout << "The Mode is for this array is " << res;
}