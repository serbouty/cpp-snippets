#include "Calculator.h"

/**
 * Perform addition, subtraction, multiplication or division.
 */
double Calculator::Calculate(double x, char operation, double y) const
{
    switch (operation)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    default:
        return 0.0;
    }
}