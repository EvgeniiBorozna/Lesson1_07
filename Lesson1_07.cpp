#include <iostream>
#include "mylib.h"
#define SIZE 8

int main()
{
    std::cout << " Task #1(4):\n\n";
    float array[SIZE];
    MyLib::initArray(array, SIZE);
    MyLib::printArray(array, SIZE);
    MyLib::countArray(array, SIZE);
    return 0;
}

