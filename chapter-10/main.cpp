#include <iostream>
#include <string>
#include <cctype>
using namespace std;

const int SIZE = 80;

// function protoypes
void upper(char []);
void lower(char []);
void reverse(char []);

int main() {
  char str1[SIZE], str2[SIZE], str3[SIZE];

  cout << "Enter a string: ";
  cin.getline(str1, SIZE);

  strcpy(str2, str1);
  strcpy(str3, str1);

  cout << "Uppercase: ";
  upper(str1);
  cout << str1 << endl;

  cout << "Lowercase: ";
  lower(str2);
  cout << str2 << endl;

  cout << "Reverse: ";
  reverse(str3);
  cout << str3 << endl;
  return 0;

}

void upper(char str[]) {
  while (*str != 0)
  {
    if (!isupper(*str))
      *str = toupper(*str);
    str++;
  }
}

void lower(char str[]) {
  while (*str != 0) {
    if (!islower(*str))
      *str = tolower(*str);
    str++;
  }
}

void reverse(char str[]) {
  while (*str != 0) {
    if(!isupper(*str))
      *str = toupper(*str);
    else if (!islower(*str))
      *str = tolower(*str);
    str++;
  }
}