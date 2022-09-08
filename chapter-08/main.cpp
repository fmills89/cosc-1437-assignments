
// Write a program that uses two identical arrays of at least 20 integers. It should call a function that uses the bubble sort algorithm to sort one of the arrays in ascending order. The function should keep a count of the number of exchanges it makes. The program then should call a function that uses the selection sort algorithm to sort the other array. It should also keep count of the number of exchanges it makes. Display these values on the screen.



// preprocessor directive - reads your program before it is complied
#include <iostream>

// declares that the program will be accessing entities whose name are part
// of the namespace called std
using namespace std;

// function prototypes - declaration of the func that tells the program about the tyoe of
// val returned by the func
void bubbleSort(int[], int);
void swap(int &, int &);

// marks beginning of a function
int main(){
 
 const int SIZE = 6;
 
 int values[SIZE] = { 6, 1, 5, 2, 4, 3 };

// sort the array
bubbleSort(values, SIZE);

// display the sorted array
cout << "The sorted values: \n";
for (auto element : values)
  cout << element << " ";
cout << endl;

return 0;
}

void bubbleSort(int array[], int size) {
  int maxElement;
  int index;

  for (maxElement = size - 1; maxElement > 0; maxElement--) {
    for (index = 0; index < maxElement; index++) {
      if (array[index] > array[index + 1]) {
        swap(array[index], array[index + 1]);
      }
    }
  }
}

void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}