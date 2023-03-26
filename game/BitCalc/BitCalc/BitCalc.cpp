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
Number number1("", ""), number2("", "");

srand(time(NULL));
int randomNumberGenerator = rand() % 30;

int bitwiseOperationGenerator = rand() % 3;

string answer = "";


string decimalToBinary(string number)
{
    string num = "";
    int remainder;
    int numberToInt = stoi(number);

    if (numberToInt == 0)
    {
        return "0";
    }
    while (numberToInt)
    {
        remainder = numberToInt % 2;
        if (remainder)
        {
            num = '1' + num;
        }

        else
        {
            num = '0' + num;
        }

        numberToInt /= 2;
    }

    return num;
}

string hexadecimalToBinary(string number)
{
    long int i = 0;

    while (number[i]) {

        switch (number[i]) {
        case '0':
            return "0000";
            break;
        case '1':
            return "0001";
            break;
        case '2':
            return "0010";
            break;
        case '3':
            return "0011";
            break;
        case '4':
            return "0100";
            break;
        case '5':
            return "0101";
            break;
        case '6':
            return "0110";
            break;
        case '7':
            return "0111";
            break;
        case '8':
            return "1000";
            break;
        case '9':
            return "1001";
            break;
        case 'A':
        case 'a':
            return "1010";
            break;
        case 'B':
        case 'b':
            return "1011";
            break;
        case 'C':
        case 'c':
            return "1100";
            break;
        case 'D':
        case 'd':
            return "1101";
            break;
        case 'E':
        case 'e':
            return "1110";
            break;
        case 'F':
        case 'f':
            return "1111";
            break;
        default:
            return "\nInvalid hexadecimal digit ";
        }
        i++;
        
    }
}


int BitwiseAndFunction()
{
    return (stoi(number1.NumberToConvert) & stoi(number2.NumberToConvert));
}
int BitwiseOrFunction()
{
    return (stoi(number1.NumberToConvert) | stoi(number2.NumberToConvert));
}
int BitwiseXorFunction()
{
    return (stoi(number1.NumberToConvert) ^ stoi(number2.NumberToConvert));
}
void bitOperationGenerator()
{
    switch (bitwiseOperationGenerator)
    {
    case 0:
        cout << "Your operation is AND: ";
        if (number1.System == "(10)")
        {
            number1.NumberToConvert = decimalToBinary(number1.NumberToConvert);
            number2.NumberToConvert = decimalToBinary(number2.NumberToConvert);
            answer = BitwiseAndFunction();
        }
        else if (number1.System == "(16)")
        {
            number1.NumberToConvert = hexadecimalToBinary(number1.NumberToConvert);
            number2.NumberToConvert = hexadecimalToBinary(number2.NumberToConvert);
            answer = BitwiseAndFunction();
        }
        else {
            cout << "Error in bitOperationGenerator";
        }

        break;

    case 1:
        cout << "Your operation is OR: ";
        if (number1.System == "(10)")
        {
            number1.NumberToConvert = decimalToBinary(number1.NumberToConvert);
            number2.NumberToConvert = decimalToBinary(number2.NumberToConvert);
            answer = BitwiseOrFunction();
        }
        else if (number1.System == "(16)")
        {
            number1.NumberToConvert = hexadecimalToBinary(number1.NumberToConvert);
            number2.NumberToConvert = hexadecimalToBinary(number2.NumberToConvert);
            answer = BitwiseOrFunction();
        }
        break;

    case 2:
        cout << "Your operation is XOR: ";
        if (number1.System == "(10)")
        {
            number1.NumberToConvert = decimalToBinary(number1.NumberToConvert);
            number2.NumberToConvert = decimalToBinary(number2.NumberToConvert);
            answer = BitwiseXorFunction();
        }
        else if (number1.System == "(16)")
        {
            number1.NumberToConvert = hexadecimalToBinary(number1.NumberToConvert);
            number2.NumberToConvert = hexadecimalToBinary(number2.NumberToConvert);
            answer = BitwiseXorFunction();
        }
        else if (number1.System == "(2)")
        {
            answer = BitwiseXorFunction();
        }
        else {
            cout << "error in bitOperationGenerator";
        }
{
    switch (bitwiseOperationGenerator)
    {
    case 0:
        cout << "Your operation is AND: ";
        if (number1.System == "(10)")
        {
            number1.NumberToConvert = decimalToBinary(number1.NumberToConvert);
            number2.NumberToConvert = decimalToBinary(number2.NumberToConvert);
            answer = BitwiseAndFunction();
        }
        else if (number1.System == "(16)")
        {
            number1.NumberToConvert = hexadecimalToBinary(number1.NumberToConvert);
            number2.NumberToConvert = hexadecimalToBinary(number2.NumberToConvert);
            answer = BitwiseAndFunction();
        }
        else 
        {
            cout << "Error in bitOperationGenerator";
        }
        break;

    case 1:
        cout << "Your operation is OR: ";
        if (number1.System == "(10)")
        {
            number1.NumberToConvert = decimalToBinary(number1.NumberToConvert);
            number2.NumberToConvert = decimalToBinary(number2.NumberToConvert);
            answer = BitwiseOrFunction();
        }
        else if (number1.System == "(16)")
        {
            number1.NumberToConvert = hexadecimalToBinary(number1.NumberToConvert);
            number2.NumberToConvert = hexadecimalToBinary(number2.NumberToConvert);
            answer = BitwiseOrFunction();
        }
        break;

    case 2:
        cout << "Your operation is XOR: ";
        if (number1.System == "(10)")
        {
            number1.NumberToConvert = decimalToBinary(number1.NumberToConvert);
            number2.NumberToConvert = decimalToBinary(number2.NumberToConvert);
            answer = BitwiseXorFunction();
        }
        else if (number1.System == "(16)")
        {
            number1.NumberToConvert = hexadecimalToBinary(number1.NumberToConvert);
            number2.NumberToConvert = hexadecimalToBinary(number2.NumberToConvert);
            answer = BitwiseXorFunction();
        }
        else if (number1.System == "(2)")
        {
            answer = BitwiseXorFunction();
        }
        else {
            cout << "error in bitOperationGenerator";
        }
        break;
    }
}

// this function makes 10 system into 2 system (n is from 10 system);

//this funtion makes 16 system into 2 system

//this funtion assigns the two numbers
void twoNumberGenerator()
{
    switch (randomNumberGenerator)
    {

        case 0:
        number1.NumberToConvert = "1011"; 
        number1.System = "(2)";
        number2.NumberToConvert = "0001";
        number2.System = number1.System;
        cout << "your numbers are: " << number1.NumberToConvert << "(" << number1.System << ")" << " and " << number2.NumberToConvert << "(" << number2.System << ")" << endl;

        break;

        case 1:
        number1.NumberToConvert = "00010111"; 
        number1.System = "(2)";
        number2.NumberToConvert = "0101";
        number2.System = number1.System;
        cout << "your numbers are: " << number1.NumberToConvert << "(" << number1.System << ")" << " and " << number2.NumberToConvert << "(" << number2.System << ")" << endl;

        break;

        case 2:
        number1.NumberToConvert = "00100000";
        number1.System = "(2)";
        number2.NumberToConvert = "10010010";
        number2.System = number1.System;
        cout << "your numbers are: " << number1.NumberToConvert << "(" << number1.System << ")" << " and " << number2.NumberToConvert << "(" << number2.System << ")" << endl;

        break;

    case 3:
        number1.NumberToConvert = "10111010"; 
        number1.System = "(2)";
        number2.NumberToConvert = "00011000";
        number2.System = number1.System;
        cout << "your numbers are: " << number1.NumberToConvert << "(" << number1.System << ")" << " and " << number2.NumberToConvert << "(" << number2.System << ")" << endl;

        break;

    case 4:
        number1.NumberToConvert = "0110111"; 
        number1.System = "(2)";
        number2.NumberToConvert = "00011001";
        number2.System = number1.System;
        cout << "your numbers are: " << number1.NumberToConvert << "(" << number1.System << ")" << " and " << number2.NumberToConvert << "(" << number2.System << ")" << endl;

        break;

    case 5:
        number1.NumberToConvert = "0110";
        number1.System = "(2)";
        number2.NumberToConvert = "10001000";
        number2.System = number1.System;
        cout << "your numbers are: " << number1.NumberToConvert << "(" << number1.System << ")" << " and " << number2.NumberToConvert << "(" << number2.System << ")" << endl;

        break;

    case 6:
        number1.NumberToConvert = "000110100011";
        number1.System = "(2)";
        number2.NumberToConvert = "10011001";
        number2.System = number1.System;
        cout << "your numbers are: " << number1.NumberToConvert << "(" << number1.System << ")" << " and " << number2.NumberToConvert << "(" << number2.System << ")" << endl;

        break;

    case 7:
        number1.NumberToConvert = "1110";
        number1.System = "(2)";
        number2.NumberToConvert = "1010";
        number2.System = number1.System;
        cout << "your numbers are: " << number1.NumberToConvert << "(" << number1.System << ")" << " and " << number2.NumberToConvert << "(" << number2.System << ")" << endl;

        break;

    case 8:
        number1.NumberToConvert = "0001001011111010";
        number1.System = "(2)";
        number2.NumberToConvert = "1000011001000100";
        number2.System = number1.System;
        cout << "your numbers are: " << number1.NumberToConvert << "(" << number1.System << ")" << " and " << number2.NumberToConvert << "(" << number2.System << ")" << endl;

        break;

    case 9:
        number1.NumberToConvert = "10A8";
        number1.System = "(16)";
        number2.NumberToConvert = "A";
        number2.System = number1.System;
        cout << "your numbers are: " << number1.NumberToConvert << "(" << number1.System << ")" << " and " << number2.NumberToConvert << "(" << number2.System << ")" << endl;

        break;

    case 10:
        number1.NumberToConvert = "B";
        number1.System = "(16)";
        number2.NumberToConvert = "F";
        number2.System = number1.System;
        cout << "your numbers are: " << number1.NumberToConvert << "(" << number1.System << ")" << " and " << number2.NumberToConvert << "(" << number2.System << ")" << endl;

        break;

    case 11:
        number1.NumberToConvert = "6C";
        number1.System = "(16)";
        number2.NumberToConvert = "4A";
        number2.System = number1.System;
        cout << "your numbers are: " << number1.NumberToConvert << "(" << number1.System << ")" << " and " << number2.NumberToConvert << "(" << number2.System << ")" << endl;

        break;

    case 12:
        number1.NumberToConvert = "6E";
        number1.System = "(16)";
        number2.NumberToConvert = "3A";
        number2.System = number1.System;
        cout << "your numbers are: " << number1.NumberToConvert << "(" << number1.System << ")" << " and " << number2.NumberToConvert << "(" << number2.System << ")" << endl;

        break;

    case 13:
        number1.NumberToConvert = "9F";
        number1.System = "(16)";
        number2.NumberToConvert = "3C";
        number2.System = number1.System;
        cout << "your numbers are: " << number1.NumberToConvert << "(" << number1.System << ")" << " and " << number2.NumberToConvert << "(" << number2.System << ")" << endl;

        break;

    case 14:
        number1.NumberToConvert = "A8";
        number1.System = "(16)";
        number2.NumberToConvert = "B3";
        number2.System = number1.System;
        cout << "your numbers are: " << number1.NumberToConvert << "(" << number1.System << ")" << " and " << number2.NumberToConvert << "(" << number2.System << ")" << endl;

        break;

    case 15:
        number1.NumberToConvert = "BF";
        number1.System = "(16)";
        number2.NumberToConvert = "D2";
        number2.System = number1.System;
        cout << "your numbers are: " << number1.NumberToConvert << "(" << number1.System << ")" << " and " << number2.NumberToConvert << "(" << number2.System << ")" << endl;

        break;

    case 16:
        number1.NumberToConvert = "64";
        number1.System = "(10)";
        number2.NumberToConvert = "23";
        number2.System = number1.System;
        cout << "your numbers are: " << number1.NumberToConvert << "(" << number1.System << ")" << " and " << number2.NumberToConvert << "(" << number2.System << ")" << endl;

        break;

    case 17:
        number1.NumberToConvert = "150";
        number1.System = "(10)";
        number2.NumberToConvert = "12";
        number2.System = number1.System;
        cout << "your numbers are: " << number1.NumberToConvert << "("<< number1.System << ")" << " and " << number2.NumberToConvert << "(" << number2.System << ")" << endl;

        break;

    case 18:
        number1.NumberToConvert = "14";
        number1.System = "(10)";
        number2.NumberToConvert = "334";
        number2.System = number1.System;
        cout << "your numbers are: " << number1.NumberToConvert << "(" << number1.System << ")" << " and " << number2.NumberToConvert << "(" << number2.System << ")" << endl;

        break;

    case 19:
        number1.NumberToConvert = "5";
        number1.System = "(10)";
        number2.NumberToConvert = "23";
        number2.System = number1.System;
        cout << "your numbers are: " << number1.NumberToConvert << "(" << number1.System << ")" << " and " << number2.NumberToConvert << "(" << number2.System << ")" << endl;

        break;

    case 20:
        number1.NumberToConvert = "26";
        number1.System = "(10)";
        number2.NumberToConvert = "4";
        number2.System = number1.System;
        cout << "your numbers are: " << number1.NumberToConvert << "(" << number1.System << ")" << " and " << number2.NumberToConvert << "(" << number2.System << ")" << endl;

        break;

    case 21:
        number1.NumberToConvert = "3";
        number1.System = "(10)";
        number2.NumberToConvert = "233";
        number2.System = number1.System;
        cout << "your numbers are: " << number1.NumberToConvert << "(" << number1.System << ")" << " and " << number2.NumberToConvert << "(" << number2.System << ")" << endl;

        break;

    case 22:
        number1.NumberToConvert = "56";
        number1.System = "(10)";
        number2.NumberToConvert = "34";
        number2.System = number1.System;
        cout << "your numbers are: " << number1.NumberToConvert << "(" << number1.System << ")" << " and " << number2.NumberToConvert << "(" << number2.System << ")" << endl;

        break;

    case 23:
        number1.NumberToConvert = "3";
        number1.System = "(10)";
        number2.NumberToConvert = "54";
        number2.System = number1.System;
        cout << "your numbers are: " << number1.NumberToConvert << "(" << number1.System << ")" << " and " << number2.NumberToConvert << "(" << number2.System << ")" << endl;

        break;

    case 24:
        number1.NumberToConvert = "25";
        number1.System = "(10)";
        number2.NumberToConvert = "34";
        number2.System = number1.System;
        cout << "your numbers are: " << number1.NumberToConvert << "(" << number1.System << ")" << " and " << number2.NumberToConvert << "(" << number2.System << ")" << endl;

        break;

    case 25:
        number1.NumberToConvert = "35";
        number1.System = "(10)";
        number2.NumberToConvert = "45";
        number2.System = number1.System;
        cout << "your numbers are: " << number1.NumberToConvert << "(" << number1.System << ")" << " and " << number2.NumberToConvert << "(" << number2.System << ")" << endl;

        break;

    case 26:
        number1.NumberToConvert = "66";
        number1.System = "(10)";
        number2.NumberToConvert = "56";
        number2.System = number1.System;
        cout << "your numbers are: " << number1.NumberToConvert << "(" << number1.System << ")" << " and " << number2.NumberToConvert << "(" << number2.System << ")" << endl;

        break;

    case 27:
        number1.NumberToConvert = "54";
        number1.System = "(10)";
        number2.NumberToConvert = "45";
        number2.System = number1.System;
        cout << "your numbers are: " << number1.NumberToConvert << "(" << number1.System << ")" << " and " << number2.NumberToConvert << "(" << number2.System << ")" << endl;

        break;

    case 28:
        number1.NumberToConvert = "34";
        number1.System = "(10)";
        number2.NumberToConvert = "545";
        number2.System = number1.System;
        cout << "your numbers are: " << number1.NumberToConvert << "(" << number1.System << ")" << " and " << number2.NumberToConvert << "(" << number2.System << ")" << endl;

        break;

    case 29:
        number1.NumberToConvert = "45";
        number1.System = "(10)";
        number2.NumberToConvert = "344";
        number2.System = number1.System;
        cout << "your numbers are: " << number1.NumberToConvert << "(" << number1.System << ")" << " and " << number2.NumberToConvert << "(" << number2.System << ")" << endl;

        break;

    default: cout << "error in twoNumberGenerator.";
    
    break;
    }

}       number1.NumberToConvert = "45";
        number1.System = "(10)";
        number2.NumberToConvert = "344";
        number2.System = number1.System;
        cout << "your numbers are: " << number1.NumberToConvert << "(" number1.System << ")" << " and " << number2.NumberToConvert << "(" << number2.System << ")" << endl;

        break;

    default: cout << "error in twoNumberGenerator.";
    
    break;
    }

}

int main()
{

   
    // (2) -> binary
    // (10) -> decimal
    // (16) -> hexadecimal

    //gives you the two numbers
    twoNumberGenerator();
    //gives you the operation
    bitOperationGenerator();
    
    while (true)
    {
        string a;
        cout << "Your answer: ";
        cin >> a;
        if (a == answer)
        {
            cout << "you won, congrats.";
        }
        else {
            cout << "not the correct answer. Try again" << endl;
        }
    }
    // generates the sysmem your answer must be in
        /*switch (answerSystemGenerator)
        {
            case 0:
            if (number1.System == "(2)")
            {
                cout << "your answer must be in 16 system" << endl;
                answerSystem = "(16)";
            }
            else if (number1.System == "(10)")
            {
                cout << "your answer must be in 2 system" << endl;
                answerSystem = "(2)";
            }
            else if (number1.System == "(16)")
            {
                cout << "your answer must be in 2 system" << endl;
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
        }*/
        /*if(number1.System == "(10)")
        {
            number1.NumberToConvert = decimalToBinary(number1.NumberToConvert);
            number2.NumberToConvert = decimalToBinary(number2.NumberToConvert);

        }
        else if(number1.System == "(16)")
        {

        }*/
    
}