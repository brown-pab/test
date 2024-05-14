#include "iostuff.h"
#include "MyMath.h"


int main()
{
	float a = Log::AskValue();
	float b = Log::AskValue();

	Log::LogMath(a, b, '+', MyMath::Add(a, b));
	Log::LogMath(a, b, '-', MyMath::Sub(a, b));
	Log::LogMath(a, b, 'x', MyMath::Mlt(a, b));
	Log::LogMath(a, b, '/', MyMath::Div(a, b));

}