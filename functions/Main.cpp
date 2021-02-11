#include <iostream>

int Multiply(int a, int b) 
{
    return a * b;
};

void MultiplyAndLog(int a, int b) 
{
    int result = Multiply(a,b);
    std::cout << result << std::endl;
};

int main()
{
    MultiplyAndLog(4,5);
    MultiplyAndLog(4212,35);
    MultiplyAndLog(4123,5532);
    std::cin.get();
};
