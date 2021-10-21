#pragma once
#ifdef MATHFUNCSDLL_EXPORTS
#define MATHFUNCSDLL_API __declspec(dllexport)
#else
#define MATHFUNCSDLL_API __declspec(dllimport)
#endif

namespace MathFuncs
{
    class MyMathFuncs
    {
    public:
        // Returns Square
        static MATHFUNCSDLL_API double Square(double a, double h);
        // Returns a - b
        static MATHFUNCSDLL_API double Perimeter(double a, double b);
    };
}