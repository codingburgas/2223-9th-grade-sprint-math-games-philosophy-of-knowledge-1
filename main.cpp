#include <iostream>
#include <string>
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

int main()
{
    srand(time(NULL));
    int randomNumber = rand() % 30;
}