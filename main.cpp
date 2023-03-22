#include <iostream>
#include <string>
#include <list>
#include <main.h>
using namespace std;

class Number
{
public:
    string NumberToConvert;
    string System;

    Number(string numberToConvert, string system)
    {
        NumberToConvert = numberToConvert;
        System = system;
    }
};

int BitwiseAndFunction()
{
    return (number1.NumberToConvert & number2.NumberToConvert);
}

//
//default_random_engine generator;
//uniform_real_distribution<double> uniform_distance(1, 10.001);
//std::random_device rd;
//
    //mt19937 mt(rd());
    //stduniform_real_distribution<double> dist(1.0, 10.0);

int main()
{
    //note : to change the generator
    srand(time(NULL));
    int randomNumber = rand() % 30;
    Number number1("", "", "");
    Number number2("", "", "");
    int answerSystemGenerator = rand() % 2; 
    
    string answerSystem = "";
    list<string> userInput;
    list<string> correctAnswer; 
        // (2) -> binary
        // (10) -> decimal
        // (16) -> hexadecimal
        
    switch (randomNumber)
    {
        
        case 0:
        number1.NumberToConvert = "1011"; // answ: 11, B
        number1.System = "(2)";
        number2.NumberToConvert = "0001";
        number2.System = number1.System;
        break;

        case 1:
        number1.NumberToConvert = "0001 0111"; // answ: 23, 17
        number1.System = "(2)";
        number2.NumberToConvert = "0101";
        number2.System = number1.System;
        break;

        case 2:
        number1.NumberToConvert = "0010 0000"; // answ: 32, 20
        number1.System = "(2)";
        number2.NumberToConvert = "1001 0010";
        number2.System = number1.System;
        break;

        case 3:
        number1.NumberToConvert = "1011 1010"; // answ: 186, BA
        number1.System = "(2)";
        number2.NumberToConvert = "0001 1000";
        number2.System = number1.System;
        break;

        case 4:
        number1.NumberToConvert = "0110 111"; // answ: 43, 2B
        number1.System = "(2)";
        number2.NumberToConvert = "0001 1001";
        number2.System = number1.System;
        break;

        case 5:
        number1.NumberToConvert = "0110"; // answ: 6, 6 
        number1.System = "(2)";
        number2.NumberToConvert = "1000 1000";
        number2.System = number1.System;
        break;

        case 6:
        number1.NumberToConvert = "0001 1010 0011"; // answ: 419, 1A3
        number1.System = "(2)";
        number2.NumberToConvert = "1001 1001";
        number2.System = number1.System;
        break;

        case 7:
        number1.NumberToConvert = "1110"; // answ: 14, E
        number1.System = "(2)";
        number2.NumberToConvert = "1010";
        number2.System = number1.System;
        break;

        case 8:
        number1.NumberToConvert = "0001 0010 1111 1010"; // answ: 4858, 12FA
        number1.System = "(2)";
        number2.NumberToConvert = "1000 0110 0100 0100";
        number2.System = number1.System;
        break;

        case 9:
        number1.NumberToConvert = "10A8"; // answ: 0001 0000 1010 1000, 4264
        number1.System = "(16)";
        number2.NumberToConvert = "A";
        number2.System = number1.System;
        break;

        case 10:
        number1.NumberToConvert = "B"; // answ: 1011, 11
        number1.System = "(16)";
        number2.NumberToConvert = "F";
        number2.System = number1.System;
        break;

        case 11:
        number1.NumberToConvert = "6C"; // answ: 0110 1100, 108
        number1.System = "(16)";
        number2.NumberToConvert = "4A";
        number2.System = number1.System;
        break;

        case 12:
        number1.NumberToConvert = "6E"; // answ: 0110 1110, 110
        number1.System = "(16)";
        number2.NumberToConvert = "3A";
        number2.System = number1.System;
        break;

        case 13:
        number1.NumberToConvert = "9F"; // answ: 1001 1111, 159
        number1.System = "(16)";
        number2.NumberToConvert = "3C";
        number2.System = number1.System;
        break;

        case 14:
        number1.NumberToConvert = "A8"; // answ: 1010 1000, 168
        number1.System = "(16)";
        number2.NumberToConvert = "B3";
        number2.System = number1.System;
        break;

        case 15:
        number1.NumberToConvert = "BF"; // answ: 1011 1111, 191
        number1.System = "(16)";
        number2.NumberToConvert = "D2";
        number2.System = number1.System;
        break;

        case 16:
        number1.NumberToConvert = "64"; // answ: 0100 0000, 40
        number1.System = "(10)";
        number2.NumberToConvert = "23";
        number2.System = number1.System;
        break;

        case 17:
        number1.NumberToConvert = "150"; // answ: 1001 0110, 96
        number1.System = "(10)";
        number2.NumberToConvert = "12";
        number2.System = number1.System;
        break;

        case 18:
        number1.NumberToConvert = "14"; // answ: 1110, E
        number1.System = "(10)";
        number2.NumberToConvert = "334";
        number2.System = number1.System;
        break;

        case 19:
        number1.NumberToConvert = "5"; // answ: 0101, 5
        number1.System = "(10)";
        number2.NumberToConvert = "23";
        number2.System = number1.System;
        break;

        case 20:
        number1.NumberToConvert = "26"; // answ: 0001 1010, 1A
        number1.System = "(10)";
        number2.NumberToConvert = "4";
        number2.System = number1.System;
        break;

        case 21:
        number1.NumberToConvert = "3"; // answ: 0011, 3
        number1.System = "(10)";
        number2.NumberToConvert = "233";
        number2.System = number1.System;
        break;

        case 22:
        number1.NumberToConvert = "56"; // answ: 0011 1000, 38
        number1.System = "(10)";
        number2.NumberToConvert = "34";
        number2.System = number1.System;
        break;

        case 23:
        number1.NumberToConvert = "3"; // answ: 0011, 3
        number1.System = "(10)";
        number2.NumberToConvert = "54";
        number2.System = number1.System;
        break;

        case 24:
        number1.NumberToConvert = "25"; // answ: 0001 1001, 19
        number1.System = "(10)";
        number2.NumberToConvert = "34";
        number2.System = number1.System;
        break;

        case 25:
        number1.NumberToConvert = "35"; // answ: 0010 0011, 23
        number1.System = "(10)";
        number2.NumberToConvert = "45";
        number2.System = number1.System;
        break;

        case 26:
        number1.NumberToConvert = "66"; // answ: 0100 0010, 42
        number1.System = "(10)";
        number2.NumberToConvert = "56";
        number2.System = number1.System;
        break;

        case 27:
        number1.NumberToConvert = "54"; // answ: 0011 0110, 36
        number1.System = "(10)";
        number2.NumberToConvert = "45";
        number2.System = number1.System;
        break;

        case 28:
        number1.NumberToConvert = "34"; // answ: 0010 0010, 22
        number1.System = "(10)";
        number2.NumberToConvert = "545";
        number2.System = number1.System;
        break;

        case 29:
        number1.NumberToConvert = "45"; // answ: 0010 1101 , 2D
        number1.System = "(10)";
        number2.NumberToConvert = "344";
        number2.System = number1.System;
        break;
    }



    switch(answerSystemGenerator)
    {
        case 0:
        if (number1.System == "(2)")
        {
            answerSystem = "(16)";      
        }
        else if (number1.System == "(10)")
        {
            answerSystem = "(2)";
        }
        else if (number1.System == "(16)")
        {
            answerSystem = "(2)";
        } 
        break;
        
        case 1: 
        if (number1.System == "(2)")
        {
            answerSystem = "(10)";
        }
        else if (number1.System == "(10)")
        {
            answerSystem = "(16)";
        }
        else if (number1.System == "(16)")
        {
            answerSystem = "(10)";
        } 
        break;
    }

    cout << randomNumber << "is your number, please convert it to the " << randomAnswerSystem << "system" << endl;
 
//(number1.NumberToConvert^number2.NumberToConvert) -> (2) // 0 + 0 -> , 0 + 1 -> 1 , 1 + 0 -> 1 , 1 + 1 = 0 
}