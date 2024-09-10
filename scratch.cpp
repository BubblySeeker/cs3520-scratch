/*
Write a program that reads two integers from standard input and prints their sum. Don't worry about error handling for now.
*/

#include <iostream>
using namespace std;

int main() {
  int num1;
  int num2;

  cout << "Enter the first number to be summed. " << endl;
  cin >> num1;
  cin.ignore();

  cout << "Enter the second number to be summed. " << endl;
  cin >> num2;

  cout << num1 + num2 << endl;


}