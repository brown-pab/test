#include "iostuff.h"

#include <iostream>

void Log::LogMath(float a, float b, char sign, float ans)
{
	std::cout << a << sign << b << "=" << ans << std::endl;
}

float Log::AskValue()
{
	float value;
	std::cout << "Enter Value: ";
	std::cin >> value;

	return value;
}
