#include <iostream>

constexpr double get_squared(double x)
{
    return x * x;
}

int main()
{
    const int some_const = 35;
    std::cout << "const: " << some_const << "\n";

    int some_var = 23;

    constexpr double some_expr = 1.3 * get_squared(some_const);
    std::cout << "const expr: " << some_expr << "\n";
}