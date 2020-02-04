// Anthony Clinton
// 4 Febuary 2020
// This program will come up with two random numbers and add them together. A student can practice solving the equation, and press a key when complete.

#include <iostream>
#include <cstdlib> // for random


using namespace std;

int main() {

  // Define and initialize variables
  int numOne = 0;
  int numTwo = 0;
  int sum = 0;
  char pause;


  // Randomizes the two numbers to be added
  srand(time(0));
  numOne = rand()%1000;
  numTwo = rand()%1000;
  

  // Calculates sum
  sum = numOne + numTwo;

  // Displays the numbers that the student can add
  cout<<numOne<<endl<<numTwo<<endl;



  // Waits until the user hits enter to show answer
  cout<<"Press any letter and hit enter for the answer\n";
  cin>>pause;

  // Displays the two numbers and their sums to the user
  cout<<numOne<<endl<<"+"<<numTwo<<endl<<"______\n"<<sum<<endl;

}