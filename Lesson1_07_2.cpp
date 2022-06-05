#include <iostream>

#define LIMIT 10
#define ARRAY_SIZE 8
#define RANGE(x, y) x >= 0 & x < y ? 1 : 0 // for Task #2
#define SwapINT(type, a, b) type tmp = a; a = b; b = tmp // for Task #3

void arrSort(const uint32_t* array, const uint32_t arrSize);

int main()
{
    // Task #2
    int x = 0, y = LIMIT;
    std::cout << "Task #2:\nEnter your number:";
    std::cin >> x;
    if (RANGE(x, y)) std::cout << "\nTRUE\n";
    else std::cout << "\nFALSE\n";

    // Task #3
    uint32_t arrTask3[ARRAY_SIZE];
    for (size_t i = 0; i < ARRAY_SIZE; i++)
    {
        std::cout << "Task #3\nEnter number: ";
        std::cin >> arrTask3[i];
    }

    arrSort(arrTask3, ARRAY_SIZE);
    return 0;
}

void arrSort(const uint32_t* array, const uint32_t arrSize) {
    int a = 4, b = 5;
    SwapINT(int, a, b);
    std::cout << a << b;
}