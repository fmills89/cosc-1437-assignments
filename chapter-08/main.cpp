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
 
 const int SIZE = 20;
 
 int values[SIZE] = {9, 10, 64, 92, 43, 2, 49, 21, 85, 30, 12, 40, 42, 34, 51, 33, 97, 24, 95, 86};

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