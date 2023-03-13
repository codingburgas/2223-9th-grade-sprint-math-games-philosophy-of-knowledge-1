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
    string AnswerSystem;

    Number(string numberToConvert, string system, string answerSystem)
    {
        NumberToConvert = numberToConvert;
        System = system;
        AnswerSystem = answerSystem;
    }
};

int main()
{
    srand(time(NULL));
    int randomNumber = rand() % 30;
    Number number("", "", "");
    int randomAnswerSystem = rand() % 2;
    int hp = 3;

    list<string> userInput;
    list<string> correctAnswer; 
        // (2) -> binary
        // (10) -> decimal
        // (16) -> hexadecimal
        
    switch (randomNumber)
    {
        
        case 0:
        number.NumberToConvert = "1011"; // answ: 11, B
        number.System = "(2)";
        break;

        case 1:
        number.NumberToConvert = "0001 0111"; // answ: 23, 17
        number.System = "(2)";
        break;

        case 2:
        number.NumberToConvert = "0010 0000"; // answ: 32, 20
        number.System = "(2)";
        break;

        case 3:
        number.NumberToConvert = "1011 1010"; // answ: 186, BA
        number.System = "(2)";
        break;

        case 4:
        number.NumberToConvert = "0010 1011"; // answ: 43, 2B
        number.System = "(2)";
        break;

        case 5:
        number.NumberToConvert = "0110"; // answ: 6, 6 
        number.System = "(2)";
        break;

        case 6:
        number.NumberToConvert = "0001 1010 0011"; // answ: 419, 1A3
        number.System = "(2)";
        break;

        case 7:
        number.NumberToConvert = "1110"; // answ: 14, E
        number.System = "(2)";
        break;

        case 8:
        number.NumberToConvert = "0001 0010 1111 1010"; // answ: 4858, 12FA
        number.System = "(2)";
        break;

        case 9:
        number.NumberToConvert = "10A8"; // answ: 0001 0000 1010 1000, 4264
        number.System = "(16)";
        break;

        case 10:
        number.NumberToConvert = "B"; // answ: 1011, 11
        number.System = "(16)";
        break;

        case 11:
        number.NumberToConvert = "6C"; // answ: 0110 1100, 108
        number.System = "(16)";
        break;

        case 12:
        number.NumberToConvert = "6E"; // answ: 0110 1110, 110
        number.System = "(16)";
        break;

        case 13:
        number.NumberToConvert = "9F"; // answ: 1001 1111, 159
        number.System = "(16)";
        break;

        case 14:
        number.NumberToConvert = "A8"; // answ: 1010 1000, 168
        number.System = "(16)";
        break;

        case 15:
        number.NumberToConvert = "BF"; // answ: 1011 1111, 191
        number.System = "(16)";
        break;

        case 16:
        number.NumberToConvert = "64"; // answ: 0100 0000, 40
        number.System = "(10)";
        break;

        case 17:
        number.NumberToConvert = "150"; // answ: 1001 0110, 96
        number.System = "(10)";
        break;

        case 18:
        number.NumberToConvert = "14"; // answ: 1110, E
        number.System = "(10)";
        break;

        case 19:
        number.NumberToConvert = "5"; // answ: 0101, 5
        number.System = "(10)";
        break;

        case 20:
        number.NumberToConvert = "26"; // answ: 0001 1010, 1A
        number.System = "(10)";
        break;

        case 21:
        number.NumberToConvert = "3"; // answ: 0011, 3
        number.System = "(10)";
        break;

        case 22:
        number.NumberToConvert = "56"; // answ: 0011 1000, 38
        number.System = "(10)";
        break;

        case 23:
        number.NumberToConvert = "3"; // answ: 0011, 3
        number.System = "(10)";
        break;

        case 24:
        number.NumberToConvert = "25"; // answ: 0001 1001, 19
        number.System = "(10)";
        break;

        case 25:
        number.NumberToConvert = "35"; // answ: 0010 0011, 23
        number.System = "(10)";
        break;

        case 26:
        number.NumberToConvert = "66"; // answ: 0100 0010, 42
        number.System = "(10)";
        break;

        case 27:
        number.NumberToConvert = "54"; // answ: 0011 0110, 36
        number.System = "(10)";
        break;

        case 28:
        number.NumberToConvert = "34"; // answ: 0010 0010, 22
        number.System = "(10)";
        break;

        case 29:
        number.NumberToConvert = "45"; // answ: 0010 1101 , 2D
        number.System = "(10)";
        break;
    }

    switch(randomAnswerSystem)
    {
        case 0:
        if (number.System == "(2)")
        {
            number.AnswerSystem = "(16)";
        }
        else if (number.System == "(10)")
        {
            number.AnswerSystem = "(2)";
        }
        else if (number.System == "(16)")
        {
            number.AnswerSystem = "(2)";
        } 
        break;

        case 1:
        if (number.System == "(2)")
        {
            number.AnswerSystem = "(10)";
        }
        else if (number.System == "(10)")
        {
            number.AnswerSystem = "(16)";
        }
        else if (number.System == "(16)")
        {
            number.AnswerSystem = "(10)";
        } 
        break;
    }

}