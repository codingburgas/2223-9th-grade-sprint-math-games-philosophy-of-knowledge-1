#include <iostream>
#include <string>
#include <random>
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

Number number1("", "");
Number number2("", "");

random_device rd;
mt19937 rng(rd());
uniform_int_distribution<int> uni(0, 30);
auto randomNumberGenerator = uni(rng); 
auto bitwiseOperationGenerator = uni(rng);

int convertedNum1;
int convertedNum2;

int answer;

//the great switch case
void numberAssignment()
{
    switch (randomNumberGenerator)
    {

    case 0:
        number1.NumberToConvert = "1011";
        number1.System = "(2)";
        number2.NumberToConvert = "0001";
        number2.System = number1.System;
        break;

    case 1:
        number1.NumberToConvert = "00010111";
        number1.System = "(2)";
        number2.NumberToConvert = "0101";
        number2.System = number1.System;
        break;

    case 2:
        number1.NumberToConvert = "00100000";
        number1.System = "(2)";
        number2.NumberToConvert = "10010010";
        number2.System = number1.System;
        break;

    case 3:
        number1.NumberToConvert = "10111010";
        number1.System = "(2)";
        number2.NumberToConvert = "00011000";
        number2.System = number1.System;
        break;

    case 4:
        number1.NumberToConvert = "0110111";
        number1.System = "(2)";
        number2.NumberToConvert = "00011001";
        number2.System = number1.System;
        break;

    case 5:
        number1.NumberToConvert = "0110";
        number1.System = "(2)";
        number2.NumberToConvert = "10001000";
        number2.System = number1.System;
        break;

    case 6:
        number1.NumberToConvert = "000110100011";
        number1.System = "(2)";
        number2.NumberToConvert = "10011001";
        number2.System = number1.System;
        break;

    case 7:
        number1.NumberToConvert = "1110";
        number1.System = "(2)";
        number2.NumberToConvert = "1010";
        number2.System = number1.System;
        break;

    case 8:
        number1.NumberToConvert = "0001001011111010";
        number1.System = "(2)";
        number2.NumberToConvert = "1000011001000100";
        number2.System = number1.System;
        break;

    case 9:
        number1.NumberToConvert = "10A8";
        number1.System = "(16)";
        number2.NumberToConvert = "A";
        number2.System = number1.System;
        break;

    case 10:
        number1.NumberToConvert = "B";
        number1.System = "(16)";
        number2.NumberToConvert = "F";
        number2.System = number1.System;
        break;

    case 11:
        number1.NumberToConvert = "6C";
        number1.System = "(16)";
        number2.NumberToConvert = "4A";
        number2.System = number1.System;
        break;

    case 12:
        number1.NumberToConvert = "6E";
        number1.System = "(16)";
        number2.NumberToConvert = "3A";
        number2.System = number1.System;
        break;

    case 13:
        number1.NumberToConvert = "9F";
        number1.System = "(16)";
        number2.NumberToConvert = "3C";
        number2.System = number1.System;
        break;

    case 14:
        number1.NumberToConvert = "A8";
        number1.System = "(16)";
        number2.NumberToConvert = "B3";
        number2.System = number1.System;
        break;

    case 15:
        number1.NumberToConvert = "BF";
        number1.System = "(16)";
        number2.NumberToConvert = "D2";
        number2.System = number1.System;
        break;

    case 16:
        number1.NumberToConvert = "64";
        number1.System = "(10)";
        number2.NumberToConvert = "23";
        number2.System = number1.System;
        break;

    case 17:
        number1.NumberToConvert = "150";
        number1.System = "(10)";
        number2.NumberToConvert = "12";
        number2.System = number1.System;
        break;

    case 18:
        number1.NumberToConvert = "14";
        number1.System = "(10)";
        number2.NumberToConvert = "334";
        number2.System = number1.System;
        break;

    case 19:
        number1.NumberToConvert = "5";
        number1.System = "(10)";
        number2.NumberToConvert = "23";
        number2.System = number1.System;
        break;

    case 20:
        number1.NumberToConvert = "26";
        number1.System = "(10)";
        number2.NumberToConvert = "4";
        number2.System = number1.System;
        break;

    case 21:
        number1.NumberToConvert = "3";
        number1.System = "(10)";
        number2.NumberToConvert = "233";
        number2.System = number1.System;
        break;

    case 22:
        number1.NumberToConvert = "56";
        number1.System = "(10)";
        number2.NumberToConvert = "34";
        number2.System = number1.System;
        break;

    case 23:
        number1.NumberToConvert = "3";
        number1.System = "(10)";
        number2.NumberToConvert = "54";
        number2.System = number1.System;
        break;

    case 24:
        number1.NumberToConvert = "25";
        number1.System = "(10)";
        number2.NumberToConvert = "34";
        number2.System = number1.System;
        break;

    case 25:
        number1.NumberToConvert = "35";
        number1.System = "(10)";
        number2.NumberToConvert = "45";
        number2.System = number1.System;
        break;

    case 26:
        number1.NumberToConvert = "66";
        number1.System = "(10)";
        number2.NumberToConvert = "56";
        number2.System = number1.System;
        break;

    case 27:
        number1.NumberToConvert = "54";
        number1.System = "(10)";
        number2.NumberToConvert = "45";
        number2.System = number1.System;
        break;

    case 28:
        number1.NumberToConvert = "34";
        number1.System = "(10)";
        number2.NumberToConvert = "545";
        number2.System = number1.System;
        break;

    case 29:
        number1.NumberToConvert = "45";
        number1.System = "(10)";
        number2.NumberToConvert = "344";
        number2.System = number1.System;
        break;

    default:
        number1.NumberToConvert = "0";
        number1.System = "(10)";
        number2.NumberToConvert = "0";
        number2.System = number1.System;
        break;
    }

    cout << "Your numbers are: " << number1.NumberToConvert << number1.System << " and " << number2.NumberToConvert << number2.System << endl;
}

int hexadecimalToDecimal(string numberAsHexadecimal)
{
    int length = numberAsHexadecimal.size();
    int base = 1;
    int numberAsDecimal = 0;

    for (int i = length - 1; i >= 0; i--)
    {
        if (numberAsHexadecimal[i] >= '0' && numberAsHexadecimal[i] <= '9')
        {
            numberAsDecimal += (int(numberAsHexadecimal[i]) - 48) * base;
            base = base * 16;
        }

        else if (numberAsHexadecimal[i] >= 'A' && numberAsHexadecimal[i] <= 'F')
        {
            numberAsDecimal += (int(numberAsHexadecimal[i]) - 55) * base;
            base = base * 16;
        }
    }

    return numberAsDecimal;
}

int binaryToDecimal(string num)
{
    int numberAsDecimal = 0;
    int size = num.size();
    for (int i = 0; i < size; i++)
    {
        numberAsDecimal = numberAsDecimal * 2 + (num[i] - '0');
    }
    return numberAsDecimal;
}

void convertNumber()
{
    if (number1.System.find("(2)") != string::npos)
    {
        convertedNum1 = binaryToDecimal(number1.NumberToConvert);
        convertedNum2 = binaryToDecimal(number2.NumberToConvert);
    }

    else if (number1.System.find("(16)") != string::npos)
    {
        convertedNum1 = hexadecimalToDecimal(number1.NumberToConvert);
        convertedNum2 = hexadecimalToDecimal(number2.NumberToConvert);
    }

    else
    {
        convertedNum1 = stoi(number1.NumberToConvert);
        convertedNum2 = stoi(number2.NumberToConvert);
    }
}

void bitwiseOperationAssignment()
{
    if (bitwiseOperationGenerator < 10)
    {
        cout << "Your bitwise operation is &." << endl;
        answer = (convertedNum1 & convertedNum2);
    }
    else if (bitwiseOperationGenerator >= 10 && bitwiseOperationGenerator <= 20)
    {
        cout << "Your bitwise operation is |." << endl;
        answer = (convertedNum1 | convertedNum2);
    }
    else {
        cout << "Your bitwise operation is ^." << endl;
        answer = (convertedNum1 ^ convertedNum2);
    }
    cout << endl;
}

void userInputAndCheck()
{
    cout << "Your input: ";
    int userInput;
    cin >> userInput;

    if (userInput == answer)
    {
        cout << "You've answered correctly. Congrats!";
    }
    else
    {
        cout << "Incorrect. The answer is: " << answer;
    }
}

int main()
{
    numberAssignment();
    convertNumber();
    bitwiseOperationAssignment();
    userInputAndCheck();
}