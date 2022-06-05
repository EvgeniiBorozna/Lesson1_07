#include <iostream>

namespace MyLib {
	void initArray(float* array, uint32_t size) {
		const uint16_t randSize = 200;
		srand(time(NULL));
		for (size_t i = 0; i < size; i++)
		{
			array[i] = (static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / randSize))) - randSize / 2;//(float)(i + 1) / 6;
		}
	}

	void printArray(const float* array, uint32_t size) {
		for (size_t i = 0; i < size; i++)
		{
			std::cout << (float)array[i] << '\n';
		}
		std::cout << "\n";
	}

	void countArray(const float* array, uint32_t size) {
		uint32_t iPos = 0, iNeg = 0;
		for (size_t i = 0; i < size; i++)
		{
			if (array[i] >= 0) iPos++;
			else iNeg++;
		}
		std::cout << "Positive: " << iPos << "\n";
		std::cout << "Negative: " << iNeg << "\n";

	}
}