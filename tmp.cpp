#include <iostream>

#define LIMIT 10
#define ARRAY_SIZE 8
#define RANGE(x, y) x >= 0 & x < y ? 1 : 0 // for Task #2
#define SwapINT(type, a, b) type tmp = a; a = b; b = tmp // for Task #3

void arrSort(uint32_t* array, const uint32_t arrSize);
void arrPrint(uint32_t* array, const uint32_t arrSize);

int main()
{
    // Task #2
    int x = 0, y = LIMIT;
    std::cout << "Task #2:\nEnter your number:";
    std::cin >> x;
    if (RANGE(x, y)) std::cout << "\nTRUE\n\n";
    else std::cout << "\nFALSE\n\n";

    // Task #3
    uint32_t arrTask3[ARRAY_SIZE];
    std::cout << "Task #3\n";
    for (size_t i = 0; i < ARRAY_SIZE; i++)
    {
        std::cout << "Enter number: ";
        std::cin >> arrTask3[i];
    }
    arrPrint(arrTask3, ARRAY_SIZE);
    arrSort(arrTask3, ARRAY_SIZE);
    arrPrint(arrTask3, ARRAY_SIZE);
    return 0;
}

void arrSort(uint32_t* array, const uint32_t arrSize) {
    bool sorted = 0;
    uint32_t right = arrSize - 1;
    uint32_t left = 1;
    do {
        bool sorted = 1;
        for (uint32_t i = left; i <= right; i++) {
            if (array[i - 1] > array[i]) {
                std::cout << array[i - 1] << " " << array[i] << ": ";
                SwapINT(uint32_t, array[i - 1], array[i]);
                std::cout << array[i - 1] << " " << array[i] << "\n";
                sorted = 0;
            }
            right--;
        }
        
        /*for (int i = right; i >= left; i--) {
            if (array[i] < array[i - 1]) {
                std::cout << array[i - 1] << " " << array[i] << "\n";
                SwapINT(int, array[i], array[i - 1]);
                std::cout << array[i - 1] << " " << array[i] << "\n";
                sorted = 0;
            }
        }
        left++;*/
    } while (sorted == 0);
    std::cout << "Array sorted\n";
}

void arrPrint(uint32_t* array, const uint32_t arrSize) {
    for (size_t i = 0; i < arrSize; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << "\n";
}
