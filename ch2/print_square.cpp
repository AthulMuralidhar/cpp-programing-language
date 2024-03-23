#include <iostream>

double get_squared(double x)
{
    return x * x;
}

void print_squared(double x)
{
    std::cout << "squared of " << x << " is " << get_squared(x) << "\n";
}

int main()
{
    print_squared(12.34);
}