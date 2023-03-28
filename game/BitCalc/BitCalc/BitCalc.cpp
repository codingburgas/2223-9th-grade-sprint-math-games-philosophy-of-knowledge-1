#include <iostream>
#include "main.h"
using namespace std;

int main()
{
    cout << "INSTRUCTIONS: \nYou will receive two numbers in one of these systems: binary, decimal, hexadecimal, as well as a binary funtion.\nCalculate them and check the answer.\nTHE ANSWER MUST BE IN THE DECIMAL SYSTEM" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------"<< endl;
 
    //gives you the two numbers
    twoNumberGenerator();
    //gives you the operation
    bitOperationGenerator();
    //user input
    userAnswer();
}