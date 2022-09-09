
// Write a program that uses two identical arrays of at least 20 integers. It should call a function that uses the bubble sort algorithm to sort one of the arrays in ascending order. The function should keep a count of the number of exchanges it makes. The program then should call a function that uses the selection sort algorithm to sort the other array. It should also keep count of the number of exchanges it makes. Display these values on the screen.



// preprocessor directive - reads your program before it is complied
#include <iostream>

// declares that the program will be accessing entities whose name are part
// of the namespace called std
using namespace std;

// function prototypes - declaration of the func that tells the program about the tyoe of
// val returned by the func
void displayArray(int[], int, string);
void bubbleSort(int[], int, int &);
void selectionSort(int[], int, int &);
void swap(int &, int &);

// marks beginning of a function
int main()
{
  const int SIZE = 20;
 
  int array_1[SIZE] = { 30, 20, 9, 28, 70, 29, 41, 52, 69, 18, 80, 51, 92, 32, 91, 38, 65, 46, 17, 16 };

  int array_2[SIZE] = { 30, 20, 9, 28, 70, 29, 41, 52, 69, 18, 80, 51, 92, 32, 91, 38, 65, 46, 17, 16 };
 

int num_of_exchanges = 0;

bubbleSort(array_1, SIZE, num_of_exchanges);
displayArray(array_1, SIZE, "SORTED------|");
cout << "\nNumber of exchanges = " << num_of_exchanges << endl;

num_of_exchanges = 0;
selectionSort(array_2, SIZE, num_of_exchanges);
displayArray(array_2, SIZE, "SORTED------|");
cout << "\nNumber of exchanges = " << num_of_exchanges << endl;

return 0;

}


void displayArray(int array[], int SIZE, string prompt) {
  cout << prompt << endl;
  for (int i = 0; i < SIZE; i++)
    cout << array[i] << ", ";
  cout << endl;
}


// bubblesort in acensding order
void bubbleSort(int array[], int size, int &num_of_exchanges) {
  int maxElement;
  int index;

  for (maxElement = size - 1; maxElement > 0; maxElement--) {
    for (index = 0; index < maxElement; index++) {
      if (array[index] > array[index + 1]) {
        swap(array[index], array[index + 1]);
        num_of_exchanges++;
      }
    }
  };
}

 // selectionSort in ascending order
void selectionSort(int array[], int size, int&(num_of_exchanges))
{
  int minIndex, minValue;

  for ( int start = 0; start < (size - 1); start++)
  {
    minIndex = start;
    minValue = array[start];
    for (int index = start + 1; index < size; index++)
    {
      if (array[index] < minValue)
      {
        minValue = array[index];
        minIndex = index;
        num_of_exchanges++;
      }
    }
    swap(array[minIndex], array[start]);
  }
}

// swap func swaps a and b in memory
void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}