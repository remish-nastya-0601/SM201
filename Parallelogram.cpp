//#include "pch.h"
#include "Parallelogram.h"
#include <stdexcept>
using namespace std;
namespace MathFuncs
{
	double MyMathFuncs::Square(double a, double h)
	{
		return a*h;
	}
	double MyMathFuncs::Perimeter(double a, double b)
	{
		return (a + b)*2;
	}
	
}