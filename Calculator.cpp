#include "Calculator.h"

Calculator::Calculator()
{

}

double Calculator::add(double a, double b)
{
    return a + b;
}

double Calculator::subtract(double a, double b)
{
    return a - b;
}

double Calculator:: multiply(double a,double b)
{
    return a*b;
}

double Calculator:: divide(double a,double b)
{
    if(b!=0)
    {
        return a/b;
    }
    else 
    {
        //throw "Enter a valid input"; This will throw an error
        throw std::runtime_error("Division by 0 is not possible"); 
        return 0.0;
    }
}