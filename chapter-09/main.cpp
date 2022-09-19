// Forrest Mills
// Assignment #2
// 09/18

// Write a program that dynamically allocates an array large enough to hold a user-defined number of test scores. Once all the scores are entered, the array should be passed to a function that sorts them in ascending order. Another function should be called that calculates the average score. The program should display the sorted list of scores and the average score with appropriate headings. Use pointer notation rather than array notation whenever possible.



#include <iostream>
using namespace std;

int inputValidate(int);
double inputValidate(double);
void getArrayElements(double *, const int);
void displayArray(double *, const int);
void selectionSort(double *, const int);
double averageArrayElements(double *, const int);
void swap(double *, double *);


int main() {
    int number_of_scores;

    cout << "Enter number of test scores: ";
    number_of_scores = inputValidate(number_of_scores);

    double *test_scores = new double(number_of_scores);

    cout << "Enter test scores: " << endl;

    getArrayElements(test_scores, number_of_scores);

    selectionSort(test_scores, number_of_scores);

    double average = averageArrayElements(test_scores, number_of_scores);

    cout << "\nSorted test scores:" << endl;
    displayArray(test_scores, number_of_scores);

    delete [] test_scores;
    test_scores = nullptr;

    cout << "\nAverage = " << average << endl;

    return 0;
}

int inputValidate(int number) {
    while (!(cin >> number))
    {
        cout << "Please enter a number! ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return number;
}

double inputValidate(double number) {
    while (!(cin >> number))
    {
        cout << "Please enter a number! ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return number;
}

void getArrayElements(double *array, const int SIZE) {
    for (int i = 0; i < SIZE; i++) {
        cout << "#" << (i + 1) << ": ";
        // cin >> *(array + i);
        *(array + i) = inputValidate(*(array + i));

    }
}

void selectionSort(double *array, const int SIZE) {
    int start_index,
        minIndex,
        minValue;

    for(start_index = 0; start_index < (SIZE - 1); start_index++) {
        minIndex = start_index;
        minValue = *(array + start_index);

        for (int index = start_index + 1; index < SIZE; index++) {
            if (*(array + index) < minValue)
            {
                minValue = *(array + index);
                minIndex = index;
            }
        }
        swap(*(array + minIndex), *(array + start_index));
    }
}

void swap(double *a, double *b) {
    double *temp = a;
    a = b;
    b = temp;
}

double averageArrayElements(double *array, const int SIZE) {
    double sum = 0;

    for (int i = 0; i < SIZE; i++)
        sum += *(array + i);
    return sum / SIZE;
    
}

void displayArray(double *array, const int SIZE) {
    for (int i = 0; i < SIZE; i++)
    {
        cout << "#" << (i + 1) << ": " << *(array + i) << endl;
    }
    
}